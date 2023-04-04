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
	int i = 0, l = 0, n = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		if (b[i] != 48 && b[i] != 49)
			return (0);
	l = atoi(b);
	if (l == 0)
		return (0);
	i = 0;
	while (1)
	{
		i = (l % 10) * power(2, n);
		sum += i;
		if (l < 2)
			break;
		l = l / 10;
		i++;
		n++;
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
