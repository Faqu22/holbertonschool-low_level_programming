#include "main.h"

void
puts_half(char *str)
{
	int cont = 0;

	while (str[cont])
		cont++;
	(cont % 2 == 0) ? cont = cont / 2 : (cont - 1) / 2;
	while (str[cont])
	{
		_putchar(str[cont]);
		cont++;
	}
	_putchar(10);
}
