#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int
main(void)
{
	int i = 0;

	char abc[26] = {"abcdefghijklmnopqrstuvwxyz"};

	char ABC[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ\n"};

	while (i < 26)
	{
		putchar(abc[i]);
		i++;
	}
	i = 0;
	while (i < 27)
	{
		putchar(ABC[i]);
		i++;
	}
	return (0);
}
