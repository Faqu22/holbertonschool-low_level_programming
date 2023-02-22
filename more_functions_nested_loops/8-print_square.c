#include "main.h"
void
print_square(int size)
{
	int i;
	int a;

	for (i = 0; i < size ; i++)
	{
		a = 0;
		while (a < size)
		{
			_putchar(35);
			a++;
		}
	}
	if (size < 1)
		_putchar(10);
}
