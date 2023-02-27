#include "main.h"

void
print_rev(char *s)
{
	int a;

	for (a = strlen(s); a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar(10);
}
