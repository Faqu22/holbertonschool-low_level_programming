#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
main(void)
{
	char abc[27] = {"abcdefghijklmnopqrstuvwxyz\n"};

	for (int i = 0 ; i < 27 ; i++)
	{
		putchar(abc[i]);
	}
	return (0);
}
