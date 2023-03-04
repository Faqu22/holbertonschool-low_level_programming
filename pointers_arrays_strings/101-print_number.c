#include "main.h"

void
print_number(int n)
{
	int first, numNew = n, ult, div = 1, contador = 0;
	(n == INT_MIN) ? ult = n % 10 * -1, n = n / 10 * -1, _putchar('-') : -1;
	(n < 0) ? n = n * -1, _putchar('-') : -1;
	(n == 0) ? _putchar('0') : -1;
	while (n > 9)
	{
		while (div < n)
		{
			if (div > 999999999)
			{
				div = 1000000000;
				break;
			}
			div = div * 10;
		}
		while (div > n)
		{
			div = div / 10;
			contador++;
		}
		while (contador > 1)
		{
			_putchar('0');
			contador--;
		}
		(contador == 1) ? contador = 0 : -1;
		(n > 9) ? first = n / div, _putchar(first + '0'), n = n % div : -1;
	}
	contador = 0;
	while (div > n)
	{
		div = div / 10;
		contador++;
	}
	while (contador > 1)
	{
		_putchar('0');
		contador--;
	}
	(n == 0) ? -1 : _putchar(n + '0');
	(numNew == INT_MIN) ? _putchar(ult + '0') : -1;
}
