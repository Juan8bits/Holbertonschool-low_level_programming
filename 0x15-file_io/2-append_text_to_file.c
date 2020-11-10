#include "holberton.h"

/**
 * append_text_to_file - Function hat appends text at the end of a file.
 * @filename: Pointer to nambe of a file.
 * @text_content: Pointer to content to append in a file.
 * Return:  1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;

	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd < 0)
			return (-1);
		if (text_content)
		{
			while (text_content[len])
				len++;
			write(fd, text_content, len);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
