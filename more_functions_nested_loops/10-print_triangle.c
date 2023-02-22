#include "main.h"
void
print_triangle(int size)
{

	int i;
	int a = size;
	int b;

	for (i = 0; i < size ; i++)
	{
		b = 0;
		a = a - 1;
		while (b < a)
		{
			putchar(32);
			b++;
		}
		while ((b >= a) && (b < size))
		{
			putchar(35);
			b++;
		}

		putchar(10);
	}
	if (size < 1)
		putchar(10);
}
