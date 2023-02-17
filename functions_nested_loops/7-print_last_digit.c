#include "main.h"
int
print_last_digit(int n)
{
	char a;
	n = n % 10;
	a = n;
	_putchar(a);
	return (a);
}
