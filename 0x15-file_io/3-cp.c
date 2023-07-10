#include "main.h"

/**
 * main - copies content from one file to the other
 * @ac: int
 * @av: ptr to arr
 * Return: int
 */

int main(int ac, char **av)
{
	const char *fTo;
	const char *fFrom;
	int fdFrom, fdTo;
	char buf[1024];
	ssize_t bytesWrite, bytesRead;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fFrom = av[1];
	fTo = av[2];
	fdFrom = open(fFrom, O_RDONLY);
	if (fdFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fFrom);
		exit(98);
	}
	fdTo = open(fTo, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (fdTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", fTo);
		exit(99);
	}

	bytesRead = read(fdFrom, buf, 1024);
	while (bytesRead > 0)
	{
		bytesWrite = write(fdTo, buf, bytesRead);
		if (bytesWrite != bytesRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", fTo);
		exit(99);
		}
	}
	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fFrom);
		exit(98);
	}
	if (close(fdFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(100);
	}
	if (close(fdTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdTo);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
