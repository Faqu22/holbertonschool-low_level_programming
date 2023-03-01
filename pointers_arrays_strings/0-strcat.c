#include "main.h"

char
*_strcat(char *dest, char *src)
{
	int cont = 0;
	int contSrc = 0;

	while (dest[cont])
		cont++;
	while (src[contSrc])
	{
		dest[cont] = src[contSrc];
		cont++;
		contSrc++;
	}
	return (dest);
}
