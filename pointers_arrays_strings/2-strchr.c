#include "main.h"

char
*_strchr(char *s, char c)
{
	int cont = 0;

	while (s[cont])
	{
		if (s[cont] == c)
			return (s + cont);
	cont++;
	}
	if (c == 0)
		return (s + cont);
	return (0);
}
