#include "main.h"

/**
 * create_file - Function that creates a file
 *
 * @filename: The parameter that represents file name
 * @text_content: The parameter that represents the content of the file
 *
 * Return: Returns 1 on success, -1 on failure
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written;
	int fd;
	int nletters = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[nletters])
		nletters++;

	bytes_written = write(fd, text_content, nletters);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
