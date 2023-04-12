#include "main.h"

/**
 * create_file - crate a file with the content.
 *
 * @filename: name of the file.
 * @text_content: content of text.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, cont;

	if (!*filename)
		return (-1);
	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	for (cont = 0; text_content[cont]; cont++)
		;
	if (cont != 0)
		write(fd, text_content, cont);
	close(fd);
	return (1);
}
