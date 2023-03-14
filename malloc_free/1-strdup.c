#include "main.h"
#include <stdlib.h>
char
*_strdup(char *str)
{
	int cont = 0;
	char *p;
	int contNew = 0;

	while (str[cont])
		cont++;
	p = malloc(sizeof(char) * cont + 1);
	if (p == NULL)
		return (p);
	for (; contNew < cont; contNew++)
		p[contNew] = str[contNew];
	return (p);
}
