#include <stdio.h>

int
main(int argc, char *argv[])
{
	if (argv[1])
	{
		argc--;
		printf("%d\n", argc);
	}
	else
		printf("0\n");
	return (0);
}
