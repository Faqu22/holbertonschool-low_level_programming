#include "main.h"

char
*_strcpy(char *dest, char *src)
{
	int cont = 0;

	while (src[cont])
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);

}
