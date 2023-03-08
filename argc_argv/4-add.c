#include <stdio.h>
#include <stdlib.h>
int
main(int argc, char *argv[])
{
	int res = 0;
	int count = 1;
	int countOfCount = 0;

	while (count < argc)
	{
		while (argv[count][countOfCount])
		{
			if (argv[count][countOfCount] < 48 || argv[count][countOfCount] > 59)
			{
				printf("Error\n");
				return (1);
			}
			countOfCount++;
		}
		countOfCount = 0;
		res += atoi(argv[count]);
		count++;
	}
	printf("%d\n", res);
	return (0);
}
