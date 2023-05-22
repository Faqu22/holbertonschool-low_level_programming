#include "search_algos.h"

int
binary_search(int *array, size_t size, int value)
{
	int f = 0, result = 0;
	size_t tmp = (size - 1) / 2;

	if (size == 0)
		return (-1);
	printf("Searching in array: ");
	for (f = 0; f <= (int)(size - 1); f++)
		printf("%d%s", array[f], f != (int)(size - 1) ? ", " : "\n");
	if (value > array[tmp])
	{
		result = binary_search(array + tmp + 1, size - tmp - 1, value);
		if (result == -1)
			return (-1);
		else
			return (tmp + 1 + result);
	}
	else if (value < array[tmp])
		return (binary_search(array, tmp, value));
	else
		return (tmp);
}
