#include "main.h"

void
print_rev(char *s)
{
	int a = strlen(s);

	a = a - 1;
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
