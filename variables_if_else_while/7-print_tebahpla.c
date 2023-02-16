#include <stdio.h>
int
main(void)
{
	int i = 0;

	int n = 123;

	while (i < 26)
	{
		putchar (n + -1);
		i++;
		n--;
	}
	putchar(10);
	return (0);
}
