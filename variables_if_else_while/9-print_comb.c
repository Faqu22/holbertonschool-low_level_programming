#include <stdio.h>
int
main(void)
{
	int i = 0;

	int n = 48;

	while (i < 10)
	{
		putchar(n);
		n++;
		i++;
		if (i < 10)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar(10);
	return (0);
}
