#include "main.h"
void print_to_98(int n)
{
	int h = n * -1;
	int i = n / 10;
	int f = n % 10;
	int b = n % 100 / 10;

	for (; n < 98; n++)
	{
		if (n > 9 || n < -9)
		{
			if (n < -9)
			{
				_putchar(45);
				i = h / 10;
				f = h % 10;
				b = h % 100 / 10;
				_putchar(i + '0');
				_putchar(b + '0');
				_putchar(f + '0');
			}
			if (n > 9)
			{
				i = n / 10;
				f = n % 10;
				_putchar(i + '0');
				_putchar(f + '0');
			}
		}
		if (n < 10 && n > -10)
		{
			if (n < 0)
			{
				h = n * -1;
				_putchar(45);
				_putchar(h + '0');
			}
			else
				_putchar(n + '0');
		}
		if (n != 98)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	for (; n > 98 ; n--)
	{
		if (n < 100)
		{
		_putchar(i + '0');
		_putchar(f + '0');
		}
		if (n > 99)
		{
			_putchar(i + '0');
			_putchar(b + '0');
			_putchar(f + '0');
		}
		if (n != 98)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	if (n == 98)
	{
		_putchar(57);
		_putchar(56);
	}
	_putchar(10);
}
