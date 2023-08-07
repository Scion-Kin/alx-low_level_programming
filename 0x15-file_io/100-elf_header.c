#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Print an error message to stderr and exit with status 98.
 * @msg: The error message to print.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * display_elf_header - Display the ELF header information.
 * @elf_header: A pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	if (elf_header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("Invalid class\n");

	printf("  Data:                              ");
	if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (elf_header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("Invalid data encoding\n");

	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (elf_header->e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV:     printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX:     printf("HP-UX\n"); break;
		case ELFOSABI_NETBSD:   printf("NetBSD\n"); break;
		case ELFOSABI_LINUX:    printf("Linux\n"); break;
		case ELFOSABI_SOLARIS:  printf("Solaris\n"); break;
		case ELFOSABI_AIX:      printf("AIX\n"); break;
		case ELFOSABI_IRIX:     printf("IRIX\n"); break;
		case ELFOSABI_FREEBSD:  printf("FreeBSD\n"); break;
		case ELFOSABI_TRU64:    printf("Tru64 UNIX\n"); break;
		case ELFOSABI_ARM:      printf("ARM architecture\n"); break;
		case ELFOSABI_STANDALONE: printf("Standalone (embedded) application\n"); break;
		default:                printf("Unknown\n"); break;
	}

	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (elf_header->e_type) {
		case ET_NONE:   printf("NONE (None)\n"); break;
		case ET_REL:    printf("REL (Relocatable file)\n"); break;
		case ET_EXEC:   printf("EXEC (Executable file)\n"); break;
		case ET_DYN:    printf("DYN (Shared object file)\n"); break;
		case ET_CORE:   printf("CORE (Core file)\n"); break;
		default:        printf("Unknown\n"); break;
	}

	printf("  Entry point address:               %#lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main - Program entry point.
 * @argc: The argument count.
 * @argv: The argument vector.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error opening file");

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read != sizeof(elf_header))
		print_error("Error reading ELF header");

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
	    elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
	    elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	    elf_header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Not an ELF file");

	display_elf_header(&elf_header);

	close(fd);
	return 0;
}
