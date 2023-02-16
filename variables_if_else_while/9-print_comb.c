#include <stdio.h>
int
main(void)
{
	int i = 0;

	int n = 48;

	do{
		putchar (n);
		n++;
		i++;
		if ( i < 10 )
		{
			putchar (44);
			putchar (32);
		}
	}
	while (i < 10);
	putchar(10);
	return (0);
}
