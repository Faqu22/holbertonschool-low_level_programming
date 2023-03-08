#include <stdio.h>
#include <stdlib.h>
int
main(int argc, char *argv[])
{
	if (argc < 4 && argc > 2)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
