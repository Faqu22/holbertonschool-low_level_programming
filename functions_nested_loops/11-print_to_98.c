#include "main.h"
void
print_to_98(int n)
{
<<<<<<< HEAD
	while (n != 98)
	{
		if (n < 0)
		{
			_putchar(45);
			if (n < -9)
			{
				_putchar((n * -1 % 100 / 10) + '0');
			}
			_putchar((n * -1 % 10) + '0');
		}
		if (n >= 0 && n <= 9)
			_putchar(n + '0');
		if (n > 9)
		{
			if (n > 99)
				_putchar((n / 100) + '0');
			_putchar((n % 100 / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			_putchar(44);
			_putchar(32);
		}
		n = n < 98 ? n + 1 : n - 1;
	}
	if (n == 98)
	{
		_putchar(57);
		_putchar(56);
		_putchar(10);
	}
=======
        while (n != 98)
        {
                if (n < 0)
                {
                        _putchar(45);
                        if (n < -9)
                        {
                                _putchar((n * -1 % 100 / 10) + '0');
                        }
                        _putchar((n * -1 % 10) + '0');
                }
                if (n >= 0 && n <= 9)
                        _putchar(n + '0');
                if (n > 9)
                {
                        if (n > 99)
                                _putchar((n / 100) + '0');
                        _putchar((n % 100 / 10) + '0');
                        _putchar((n % 10) + '0');
                }
                if (n != 98)
                {
                        _putchar(44);
                        _putchar(32);
                }
                n = n < 98 ? n + 1 : n - 1;
        }
        if (n == 98)
        {
                _putchar(57);
                _putchar(56);
                _putchar(10);
        }
>>>>>>> 7c9e910e7d154db1f83b53302190d19e829891fe
}
