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
	if (str == NULL)
		return (str);
	p = malloc(sizeof(char) * cont + 1);
	if (p == NULL)
		return (NULL);
	for (; contNew < cont; contNew++)
		p[contNew] = str[contNew];
	return (p);
}
