#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: The parameter that represents file name
 * @letters: The parameter that represents number of the letters
 *
 * Return: Returns number of letters that have been printed
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * letters);
	ssize_t bytes_read = read(fd, buf, letters);
	ssize_t bytes_written;

	if (!filename)
		return (0);

	if (fd == -1)
		return (0);

	if (!buf)
	{
		close(fd);
		return (0);
	}

	if (bytes_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);

	return (bytes_written);
}
