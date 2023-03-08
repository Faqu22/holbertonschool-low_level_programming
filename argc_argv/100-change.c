#include <stdio.h>
#include <stdlib.h>
int
main(int argc, char *argv[])
{
	int res = 0;
	int count;
	int cents[5] = {25, 10, 5, 2, 1};
	int countOfCount = 0;

	if (argc == 2)
	{
		count = atoi(argv[1]);
		if (count < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			while (cents[countOfCount])
			{
				if (count >= cents[countOfCount] && count > 0)
				{
					count = count - cents[countOfCount];
					res++;
					countOfCount = countOfCount - 1;
				}
				countOfCount++;
			}
		}
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", res);
	return (0);
}
