#include "main.h"
#include <math.h>

int power(int x, int y);

/**
 * binary_to_uint - converson between binary a decimal.
 *
 * @b: the number in binary.
 * Return: the number in decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, n = 0, cont = 0, a = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	for (cont = 0; b[cont]; cont++)
		if (b[cont] != 48 && b[cont] != 49)
			return (0);
	i = atoi(b);
	if (i == 0)
		return (0);
	cont--;
	while (1)
	{
		a = b[cont] - 48;
		i = a * power(2, n);
		sum += i;
		if (cont == 0)
			break;
		i++;
		n++;
		cont--;
	}
	return (sum);
}

int
power(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (res);
	else if (y != 0)
		res = x * power(x, (y - 1));
	return (res);
}
