#include "main.h"

char
*rot13(char *rot)
{
	char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\0";
	char *tr = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm\0";
	int cont = 0;
	int contTry = 0;

	while (rot[cont])
	{
		for (contTry = 0; rot13[contTry]; contTry++)
		{
			if (rot[cont] == rot13[contTry])
			{
				rot[cont] = tr[contTry];
				break;
			}
		}
		cont++;
	}
	return (rot);
}
