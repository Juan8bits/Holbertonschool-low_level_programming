#include "holberton.h"

/**
 * create_file - Function that creates a file
 * @filename: Pointer to file name.
 * @text_content: Pointer to content to copy in the new file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t counter = 0;
	size_t len = 0;

	if (filename)
	{
		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
		if (fd < 0)
			return (-1);
		while (text_content[len])
			len++;
		counter = write(fd, text_content, len);
		close(fd);
		if (counter < 0)
			return (-1);
		return (1);
	}
	return (-1);
}
