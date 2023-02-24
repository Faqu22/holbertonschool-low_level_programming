#include "main.h"
#include <limits.h>
void
print_numbers(int n)
{
	int div, ult, zero;
	int mod = 10;
	int cont = 0;
	int neg = n;

	if (n < 0)
	{
		ult = n % 10 * -1;
		n = n / 10 * -1;
		_putchar('-');
	}
	while (n > 9)
	{
		while (mod < n)
		{
			mod = mod * 10;
			cont = 0;
		}
		while (mod > n)
		{
			mod = mod / 10;
			cont++;
		}
		div = n;
		while (div > 9)
		{
			div = div / 10;
		}
		zero = cont - 1;
		if (cont != 1)
		{
			while (zero > 1)
			{
				_putchar('0');
				zero--;
			}
		}
		_putchar(div + '0');
		n = n % mod;
	}
	_putchar(n + '0');
	if (neg < 0)
		_putchar(ult + '0');
}
