#include "main.h"

void
rev_string(char *s)
{
	int a = 0;
	int x = 0;

	for (; s[x] != '\0'; x++)
	{
		_putchar(s[x]);
		a++;
	}
	_putchar('\n');
	a = a -1;
	for (; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
