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
	if (argv[1] != NULL && argv[3] != NULL)
	{	a = atoi(argv[1]);
		b = atoi(argv[3]);
	}
	if (argv[2][1] != '\0' || argv[2][0] == '.')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ((*get_op_func(argv[2]))(a, b)));
	return (0);
}
