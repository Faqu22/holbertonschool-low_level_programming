#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
main(void)
{
	int i = 0;

	char abc[25] = {"abcdfghijklmnoprstuvwxyz\n"};

	while (i < 25)
	{
		putchar(abc[i]);
		i++;
	}
	return (0);
}
