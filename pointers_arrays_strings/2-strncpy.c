#include "main.h"

char
*_strncpy(char *dest, char *src, int n)
{
	int cont = 0;
	int contSrc = 0;
	int contCont = 0;
	while (src[contSrc])
		contSrc++;
	while (cont < n)
	{
		dest[cont] = src[cont];
		if (cont == contSrc)
		{
			contCont++;
			cont = 0;
		}
		if (contCont == n)
			break;
		cont++;
	}
	return (dest);
}
