#include "main.h"

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cont = 0, conts2 = 0;
	char *c;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (cont = 0; s1[cont] && s1 != NULL; cont++)
		;

	for (conts2 = 0; s2[conts2]; conts2++)
		;

	n = (conts2 < n) ? conts2 : n;
	c = malloc(sizeof(char) * (cont + n));
	if (c == NULL)
		return (NULL);
	for (cont = 0; s1[cont]; c[cont] = s1[cont], cont++)
		;

	for (conts2 = 0; conts2 < n; conts2++)
		c[conts2 + cont] = s2[conts2];

	c[conts2 + cont] = '\0';
	return (c);
}
