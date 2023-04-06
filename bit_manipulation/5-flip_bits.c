#include "main.h"

/**
 * flip_bits - this function say the quantity of bits flip to get other number.
 *
 * @n: number 1.
 * @m: number 2.
 * Return: the quantity of bits flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int rel = 0, cont = 0;

	rel = m ^ n;
	for (i = 1; i < (n | m); i *= 2)
	{
		if ((i | rel) == rel)
			cont++;
	}
	return (cont);
}
