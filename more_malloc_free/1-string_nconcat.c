#include "main.h"

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cont, conts2;
	char *c;
	char *asd;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	for (cont = 0; s1 != NULL && s1[cont]; cont++)
		;

	for (conts2 = 0; s2 != NULL && s2[conts2]; conts2++)
		;

	n = (conts2 < n) ? conts2 : n;
	c = malloc(sizeof(char) * (cont + n + 1));

	if (c == NULL)
		return (NULL);
	for (cont = 0; s1 != NULL && s1[cont]; cont++)
		c[cont] = s1[cont];

	for (conts2 = 0; s2 != NULL && conts2 < n; conts2++)
		c[conts2 + cont] = s2[conts2];

	c[cont + n] = '\0';
	return (c);
}
