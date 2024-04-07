#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 *
 * @filename: The parameter that represents file name
 * @text_content: The parameter that represents the content of the file
 *
 * Return: Returns 1 on success, -1 on failure
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	ssize_t bytes_written;


	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	nletters = 0;

	if (text_content)
	{
		while (text_content[nletters])
			nletters++;

		bytes_written = write(fd, text_content, nletters);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

