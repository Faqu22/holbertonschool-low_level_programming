#include "main.h"
int
print_last_digit(int n)
{
	n = n % 10;
	n = n + 48;
	_putchar(n);
	n = n - 48;
	return (n);
}
