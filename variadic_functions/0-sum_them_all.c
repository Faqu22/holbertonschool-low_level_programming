#include "variadic_functions.h"
/**
 * sum_them_all - sum of all numbers.
 * @n: the first int.
 * Return: return the sum of all numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int cont;
	int i = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (cont = 0; cont < n; cont++)
		i = i + va_arg(list, const unsigned int);
	va_end(list);
	return (i);
}
