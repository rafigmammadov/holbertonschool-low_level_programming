#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * buf_make - creates buffer
 * @f: parametr f
 * Return: address of buffer
*/
char *buf_make(char *f)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (!buf)
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f), exit(99);

	return (buf);
}

/**
 * cf - closes file
 * @fd: parametr fd
 * Return: Nothing
*/
void cf(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
}

/**
 * main - copies the content of a file to another file
 * @argc: parametr argc
 * @argv: parametr argv
 * Description: Function copies the content of a file to another file
 * Return: 0
*/
int main(int argc, char **argv)
{
	int init, dest, r, w;
	char *buf;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	buf = buf_make(argv[2]);
	init = open(argv[1], O_RDONLY);
	r = read(init, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (init == -1 || r == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n",
				argv[1]), free(buf), exit(98);

		w = write(dest, buf, r);
		if (dest == -1 || w == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n",
				argv[2]), free(buf), exit(99);

		r = read(init, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	cf(init);
	cf(dest);

	return (0);
}
