#include "main.h"

char
*_strstr(char *haystack, char *needle)
{
	int cont = 0;
	int contEnd = 0;
	int temp = 0;

	while (haystack[cont])
	{
		while (haystack[cont] == needle[temp])
		{
			if (temp == 0)
				contEnd = cont;
			cont++;
			temp++;
			if (needle[temp] == '\0')
			{
					return (haystack + contEnd);
			}
		}
		contEnd = 0;
		cont++;
	}
	return (0);
}
