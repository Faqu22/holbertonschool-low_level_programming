#include "main.h"
void
more_numbers(void)
{
	int i;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			if (i >= 0)
				_putchar((i % 10) + '0');
		}
	_putchar(10);
	}
}
