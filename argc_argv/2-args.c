#include <stdio.h>

int
main(int argc, char *argv[])
{
	int count = 1;

	while (argv[count] &&  count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	if (argc < 2)
		printf("%s\n", argv[0]);
	return (0);
}
