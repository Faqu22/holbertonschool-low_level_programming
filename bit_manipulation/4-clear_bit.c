#include "main.h"

unsigned int lenbit(unsigned long int n);
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: number in decimals.
 * @index: index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (lenbit(*n) < index)
		return (1);
	if (lenbit(4294967295) < index)
		return (-1);
	for (; index > 0; index--)
	{
		i = i * 2;
	}
	if (index == 0)
		*n = *n ^ i;

	return (1);

}

/**
 * lenbit - len the quantity of bit of number.
 *
 * @n: number in decimals.
 * Return: returns the quantity.
 */
unsigned int lenbit(unsigned long int n)
{
	unsigned int i = 1;

	if (n > 1)
		i = 1 + lenbit(n / 2);

	return (i);
}
