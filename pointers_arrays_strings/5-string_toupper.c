#include "main.h"

char
*string_toupper(char *upp)
{
	int cont = 0;

	while (upp[cont])
	{
		if (upp[cont] >= 98 && upp[cont] <= 122)
			upp[cont] = upp[cont] - 32;
		cont++;
	}
	return (upp);
}
