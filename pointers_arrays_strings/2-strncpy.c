#include "main.h"

char
*_strncpy(char *dest, char *src, int n)
{
	int cont = 0;

	while (cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	return (dest);
}
