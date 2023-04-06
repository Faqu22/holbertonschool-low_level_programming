#include "main.h"
#include <limits.h>
/**
 * flip_bits - this function say the quantity of bits flip to get other number.
 *
 * @n: number 1.
 * @m: number 2.
 * Return: the quantity of bits flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int rel = 0, cont = 0;

	for (rel = m ^ n; rel > 0; rel = rel >> 1)
		if ((rel | 1) == rel)
			cont++;

	return (cont);
}
