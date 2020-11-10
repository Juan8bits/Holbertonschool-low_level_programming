#include "holberton.h"

/**
 * main - Function that copies the content of one file to another.
 * @ac: Number of arguments given.
 * @av: Pointer to pointer with argument.
 * Return: 0 or message error.
 */
int main(int ac, char **av)
{
int file_from, file_to, nread, nwrite, bufsize = 1024;
char buf[1024];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(av[1], O_RDONLY);
if (file_from < 0 || read(file_from, buf, bufsize) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
av[1]);
exit(98);
}
nread = read(file_from, buf, bufsize);
file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
if (file_to < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
for (; nread > 0; nread = read(file_from, buf, bufsize))
{
nwrite = write(file_to, buf, nread);
if (nwrite < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}
if (close(file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
}
if (close(file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
}
return (0);
}
