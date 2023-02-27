#include "main.h"

void
print_rev(char *s)
{
	int a = strlen(s);

	for (; (a - 1) >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
