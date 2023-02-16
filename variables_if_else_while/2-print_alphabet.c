#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
main(void)
{
	int i = 0;

	char abc[27] = {"abcdefghijklmnopqrstuvwxyz\n"};

	while (i < 27)
	{
		putchar(abc[i]);
		i++;
	}
	return (0);
}
