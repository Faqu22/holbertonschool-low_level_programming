#include "3-calc.h"

/**
 * main - check the code.
 *
 * @argc: number of words given.
 * @argv: each word for the lines.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1] != NULL)
		a = atoi(argv[1]);
	if (argv[3] != NULL)
		b = atoi(argv[3]);
	printf("%d\n", ((*get_op_func(argv[2]))(a, b)));
	return (0);
}
