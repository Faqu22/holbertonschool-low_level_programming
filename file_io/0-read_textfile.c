#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - read a text fle and print it.
 *
 * @filename: the name of the textfile.
 * @letters: quantity of letters.
 * Return: Number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cont;
	char *op;

	if (!*filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	op = malloc(letters);
	if (op == NULL)
		return (0);
	read(fd, op, letters);
	for (cont = 0; *(op + cont); cont++)
		;
	write(STDOUT_FILENO, op, cont);
	close(fd);
	return (cont);
}
