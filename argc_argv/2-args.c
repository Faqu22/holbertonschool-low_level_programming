#include <stdio.h>

int
main(int argc, char *argv[])
{
	int count = 0;

	while (argv[count] &&  count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
