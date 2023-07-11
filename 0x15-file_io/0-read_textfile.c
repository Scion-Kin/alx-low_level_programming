#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t total_bytes_read = 0, bytes_read, bytes_written;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (letters > 0)
	{
		bytes_read = read(fd, buffer, sizeof(buffer));
		if (bytes_read == -1)
			break;

		if (bytes_read == 0)  // End of file reached
			break;

		if (letters < bytes_read)
			bytes_read = letters;

		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written == -1)
			break;

		total_bytes_read += bytes_read;
		letters -= bytes_read;
	}

	close(fd);
	return (total_bytes_read);
}
