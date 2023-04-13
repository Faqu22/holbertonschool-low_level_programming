#include "main.h"

int dprintf(int fd, const char *format, ...);
int _cp(char *file_f, char *file_to);
/**
 * main - entry.
 *
 * @ac: int.
 * @av: entrys.
 * Return: 0 if success.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(av[1], av[2]);
	return (0);
}
/**
 * _cp - copy file_f in file_to.
 * @file_f: origin.
 * @file_to: destiny.
 * Return: 0 if success.
 */
int _cp(char *file_f, char *file_to)
{
	int fd, ft;
	char temp[1024];
	ssize_t n, l;

	if (file_f == NULL || !*file_f)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_f);
		exit(98);
	}
	fd = open(file_f, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_f);
		exit(98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((n = read(fd, temp, 1024)) > 0)
	{
		l = write(ft, temp, n);
		if (l == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_f);
		exit(98);
	}
	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	close(ft);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	close(fd);
	return (0);
}
