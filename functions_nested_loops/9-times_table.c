#include "main.h"

void
times_table(void)
{
	int dec[2];
	int res;
	int a;
	int i;
	int table[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (a = 0 ; a <= 9 ; a++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			res = table[i] * a;
			if (res < 10)
			{
				_putchar(res + '0');
				_putchar(32);
				if (i < 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			if (res > 9)
			{
				dec[0] = res / 10;
				dec[1] = res % 10;
				_putchar(dec[0] + '0');
				_putchar(dec[1] + '0');
				if (i < 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
	_putchar(10);
	}
}
