#include "main.h"
#include <stdlib.h>
char
*str_concat(char *s1, char *s2)
{
	int cont = 0;
	int conts2 = 0;
	char *p;

	while (s1[cont])
		cont++;
	while (s2[conts2])
		conts2++;
	p = malloc(sizeof(char) * (cont + conts2) + 1);
	cont = 0;
	conts2 = 0;
	while (s1[cont])
	{
		p[cont] = s1[cont];
		cont++;
	}
	while (s2[conts2])
	{
		p[cont] = s2[conts2];
		conts2++;
		cont++;
	}
	return (p);


}
