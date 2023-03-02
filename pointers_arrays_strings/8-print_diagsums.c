#include "main.h"

void
print_diagsums(int *a, int size)
{
	int columns;
	int lines;
	int sums = 0;
	int smus = 0;

	for (lines = 0; lines < size; lines++)
	{
		for (columns = 0; columns < size; columns++)
		{
			if (lines == columns)
			{
				sums += *(a + lines * size + columns);
			}
		}
	}
	for (lines = 0; lines <= size; lines++)
	{
		for (columns = size; columns >= 0; columns--)
		{
			if (lines == size - columns - 1)
			{
				smus += *(a + lines * size + columns);
			}
		}
	}
	printf("%d, %d\n", sums, smus);
}
