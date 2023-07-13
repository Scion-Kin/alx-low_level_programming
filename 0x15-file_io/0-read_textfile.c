#include "main.h"

/**
 * read_textfile - reads text file and outputs to stdout
 * @filename: file name
 * @letters: number of letters to read
 * Return: number of characters written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_c, written;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_c = read(fd, buffer, letters);
	if (read_c == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, read_c);
	if (written == -1 || written != read_c)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	free(buffer);
	return (written);
}
