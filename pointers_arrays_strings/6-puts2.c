#include "main.h"

void
puts2(char *str)
{
	int cont = 0;

	while (str[cont])
	{
		if (cont % 2 == 0)
			_putchar(str[cont]);
		cont++;
	}
	_putchar('\n');
}
