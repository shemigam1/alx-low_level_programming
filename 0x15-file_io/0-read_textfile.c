#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: str
 * @letters: size;
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytesRead, bytesWrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	bytesRead = read(fd, buf, letters);
	if (bytesRead == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	bytesWrite = write(STDOUT_FILENO, buf, bytesRead);
	if (bytesWrite == -1 || bytesWrite != bytesRead)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (bytesRead);
}
