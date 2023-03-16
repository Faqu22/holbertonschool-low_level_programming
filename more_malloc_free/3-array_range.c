#include "main.h"

int
*array_range(int min, int max)
{
	int *p;
	int cont;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (cont = 0; cont < (max - min + 1); cont++)
		p[cont] = cont + min;
	return (p);
}
