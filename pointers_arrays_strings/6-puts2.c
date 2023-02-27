#include "main.h"

void
puts2(char *str)
{
	int cont = 0;
	while (str[cont])
	{
		_putchar(str[cont]);
		cont = cont + 2;
	}
	_putchar('\n');
}
