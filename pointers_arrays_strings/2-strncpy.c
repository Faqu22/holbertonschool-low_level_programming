#include "main.h"

char
*_strncpy(char *dest, char *src, int n)
{
	int cont = 0;

	while (cont < n)
	{
		dest[cont] = src[cont];
		cont++;
		if(src[cont] == '\0')
			n = n - cont;
	}
	return (dest);
}
