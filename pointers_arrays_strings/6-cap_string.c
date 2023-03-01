#include "main.h"

char
*cap_string(char *cap)
{
	int cont = 0;

	while (cap[cont])
	{
		if (cap[cont] < 97 && cap[cont] > 122)
			continue;
		else
		{
			switch (cap[cont - 1])
			{
				case 32:
				case 44:
				case 59:
				case 46:
				case 10:
				case 9:
				case 33:
				case 63:
				case 34:
				case 40:
				case 41:
				case 123:
				case 125:
					cap[cont] = cap[cont] - 32;
			}
		}
		cont++;
	}
	return (cap);
}
