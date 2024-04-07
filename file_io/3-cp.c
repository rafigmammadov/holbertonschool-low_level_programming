#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * buf_make - Function that creates buffer
 *
 * @f: The parameter that represents f
 *
 * Return: Returns the address of buffer
 *
 *
 */

char *buf_make(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
	{
		dprintf(STDERR_FILENO,
			"error: can't write to %s\n", f);
		exit(99);
	}

	return (buf);
}

/**
 * cf - The function that closes the file
 *
 * @fd: The parameter that represents fd
 *
 * Returns: Returns no value
 *
 *
 */

void cf(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Function that copies the content of a file to another file.
 *
 * @argc: The parameter that represents the count of arguments
 * @argv: The parameter that represents arguments
 *
 * Return: Always returns 0
 *
 *
 */

int main(int argc, char **argv)
{
	int init, dest, r, w;
	char *buf;

	if (argc != 3)
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n"), exit(97);

	buf = buf_make(argv[2]);
	init = open(argv[1], O_RDONLY);
	r = read(init, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (init == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"error: can't read from file %s\n",
				argv[1]);
			free(buf), exit(98);
		}

		w = write(dest, buf, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"error: can't write to %s\n",
				argv[2]);
			free(buf);
			exit(99);
		}

		r = read(init, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	cf(init);
	cf(dest);

	return (0);
}

