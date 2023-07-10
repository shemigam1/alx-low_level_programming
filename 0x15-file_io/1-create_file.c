#include "main.h"

/**
 * create_file - creates file
 * @filename: filename
 * @text_content: str
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytesRead;
	ssize_t bytesWrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytesRead = 0;
		while (*text_content != '\0')
		{
			bytesRead++;
			text_content++;
		}
		bytesWrite = write(fd, text_content, bytesRead);
		if (bytesWrite == -1 || bytesWrite != bytesRead)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
