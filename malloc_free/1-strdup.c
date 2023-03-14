#include "main.h"
#include <stdlib.h>
char
*_strdup(char *str)
{
	int cont = 0;
	char *p;
	int contNew = 0;

	if (str == 0)
	{
		return (NULL);
	}
	else
	{
		while (str[cont])
			cont++;
		p = malloc(sizeof(char) * cont);
		for (; contNew < cont; contNew++)
			p[contNew] = str[contNew];
	}
	return (p);
}
