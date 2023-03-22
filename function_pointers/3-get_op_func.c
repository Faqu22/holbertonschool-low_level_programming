#include "3-calc.h"

/**
 * get_op_func - Gives the necessary operation.
 *
 * @s: Operation.
 *
 * Return: Returns the required function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops->op != NULL && *(ops[i].op) != *s)
		i++;

	if (ops->op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);


}
