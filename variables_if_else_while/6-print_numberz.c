#include <stdio.h>
int
main(void)
{
	char c = '0';

	int i = 0;

	while (i < 10)
	{
		putchar (c);
		c++;
		i++;
	}
	putchar(10);
	return (0);
}
