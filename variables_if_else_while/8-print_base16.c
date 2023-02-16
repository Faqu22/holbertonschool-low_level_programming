#include <stdio.h>
int
main(void)
{
	int i = 0;

	int n = 48;
	
	int a = 97;

	while (i < 10)
	{
		putchar (n);
		i++;
		n++;
	}
	while (i < 16)
	{
		putchar (a);
		i++;
		a++;
	}
	putchar(10);
	return (0);
}
