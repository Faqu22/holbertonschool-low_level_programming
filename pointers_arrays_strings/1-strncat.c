#include "main.h"

char
*_strncat(char *dest, char *src, int n)
{
	int cont = 0;
	int contSrc = 0;

	while (dest[cont])
		cont++;
	while (contSrc < n)
	{
		dest[cont] = src[contSrc];
		cont++;
		if(src[contSrc] == '\0')
			break;
		contSrc++;
	}
	return (dest);
}
