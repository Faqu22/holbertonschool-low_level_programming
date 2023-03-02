#include "main.h"

char
*_strstr(char *haystack, char *needle)
{
	int cont = 0;
	int contEnd = 0;
	int initial = 0;
	int temp = 0;

	if (needle[0] == '\0')
		return (haystack + 0);
	while (haystack[contEnd])
	{
		temp = contEnd;
		while (needle[cont] == haystack[temp])
		{
			if (initial == 0)
				initial = temp;
			cont++;
			temp++;
			if (needle[cont] == '\0')
				return (haystack + contEnd);
		}
		cont = 0;
		initial = 0;
		contEnd++;
	}
	return (0);
}
