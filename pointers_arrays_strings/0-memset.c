#include "main.h"

char
*_memset(char *s, char b, unsigned int n)
{
	unsigned int cont = 0;

	while (cont < n)
	{
		s[cont] = b;
		if (s[cont] == '\0')
			break;
		cont++;
	}
	return (s);
}
