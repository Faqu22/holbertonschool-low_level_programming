#include "3-calc.h"
/**
 * op_add - Operator.
 * @a: Value 1.
 * @b: Value 2.
 * Return: Value of account.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Operator.
 * @a: Value 1.
 * @b: Value 2.
 * Return: Value of account.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Operator.
 * @a: Value 1.
 * @b: Value 2.
 * Return: Value of account.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Operator.
 * @a: Value 1.
 * @b: Value 2.
 * Return: Value of account.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Operator.
 * @a: Value 1.
 * @b: Value 2.
 * Return: Value of account.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
