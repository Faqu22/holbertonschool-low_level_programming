#include "main.h"
int
print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return (n);
}
