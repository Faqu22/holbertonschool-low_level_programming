#include "main.h"
void
print_diagonal(int n)
{
	int i;
	int a;

	for (i = 0; i < n ; i++)
	{
		a = 0;
		while (a < i)
		{
			_putchar(32);
			a++;
		}
			_putchar(92);
		_putchar(10);
	}
	_putchar(10);
}
