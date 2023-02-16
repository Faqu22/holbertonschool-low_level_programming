#include <stdio.h>
int
main(void)
{
	int i = 0;

	int n = 47;

	while (i < 10)
	{
		putchar (n + 1);
		i++;
		n++;
	}
	putchar(10);
	return (0);
}
