#include "main.h"

void
rev_string(char *s)
{
	int a = 0;
	int x;

	for (x = 0; s[x] < '\0'; x++)
	{
		_putchar(s[x]);
		a++;
	}
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
