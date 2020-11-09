#include "holberton.h"

/**
 * read_textfile - Function thtat reads a text file and prints it to the
 * POSIX standard output.
 * @filename: Pointer to first letter to file name.
 * @letters: Number of letters to print.
 * Return: Number of printed and readed letters. If it fails, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*Check the file, open it, read it and after print it.*/
	int fd;
	ssize_t counter = 0;
	char *buff = NULL;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);

		buff = malloc(sizeof(letters));
		if (!buff)
			return (0);

		counter = read(fd, buff, letters);
		if (counter < 0)
			return (0);
		close(fd);

		counter = write(STDOUT_FILENO, buff, counter);
		if (counter < 0)
			return (0);
		return (counter);
	}
	return (0);
}
