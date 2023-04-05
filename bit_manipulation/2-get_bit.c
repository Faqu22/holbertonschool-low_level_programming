#include "main.h"

/**
 * get_bit - get an number in binary give for index.
 *
 * @n: number in decimals.
 * @index: index.
 * Return: returns an number in specificier.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 1;
	unsigned int a = 0;

	while (a <= index)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			i *= 10;
		}
		else
		{
			n = n / 2;
			i *= 10;
			i++;
		}
		if (n < 1)
		break;
		a++;
	}
	for (; index > 1; index--)
	{
		i = i / 10;
	}

	return (i % 10);
}
