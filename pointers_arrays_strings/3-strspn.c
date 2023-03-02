#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	unsigned int contAccept = 0;
	unsigned int contEnd = 0;

	while (s[cont])
	{
		while (accept[contAccept])
		{
			if (s[cont] == accept[contAccept])
			{
				contEnd++;
				cont++;
				contAccept = -1;
			}
			contAccept++;
		}
		contAccept = 0;
		cont++;
		if (contEnd != 0)
			break;
	}
	return (contEnd);
}
