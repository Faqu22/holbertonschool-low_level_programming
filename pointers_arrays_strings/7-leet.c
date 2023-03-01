#include "main.h"

char
*leet(char *leet)
{
	char *try = "AaEeLlOoTt";
	char numb[10] = "4433110077";
	int contTry = 0;
	int cont = 0;

	while (leet[cont])
	{
		while (try[contTry])
		{
			if (leet[cont] == try[contTry])
			{
				leet[cont] = numb[contTry];
			}
			contTry++;
		}
		contTry = 0;
		cont++;
	}
	return (leet);
}
