#include "main.h"

char
*_strpbrk(char *s, char *accept)
{
	int cont = 0;
	int contAcc = 0;

	while (s[cont])
	{
		while (accept[contAcc])
		{
			if (s[cont] == accept[contAcc])
				return (s + cont);
		contAcc++;
		}
		contAcc = 0;
		cont++;
	}
	if (accept[0] == '\0')
		return (s + cont);
	return (0);
}
