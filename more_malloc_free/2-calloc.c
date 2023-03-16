#include "main.h"

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb < 1 || size < 1)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb; a++)
		p[a] = 0;
	return (p);
}
