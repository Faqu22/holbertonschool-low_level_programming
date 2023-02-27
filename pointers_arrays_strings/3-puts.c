#include "main.h"

void
_puts(char *str)
{
	int cont = 0;
	while (str[cont] != '\0')
	{
		_putchar(str[cont]);
		cont++;
	}


}
