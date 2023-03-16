#include "main.h"
#include <limits.h>

char
*malloc_check(unsigned int b)
{
	char *p;

	if (b < 1)
		exit(98);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	int cont = 0, conts2 = 0;
	char *c;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (cont = 0; s1[cont] && s1 != NULL; cont++)
		;
	c = malloc_check(sizeof(char) * (cont + n));
	for (cont = 0; s1[cont]; c[cont] = s1[cont], cont++)
		;
	for (conts2 = 0; s2[conts2] != s2[n] && s2[conts2]; conts2++)
		c[conts2 + cont] = s2[conts2];
	return (c);



}
