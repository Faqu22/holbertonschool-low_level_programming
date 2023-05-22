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
	
	if (value == array[tmp])
		return (tmp);
	else if (value < array[tmp])
		return (binary_search(array, tmp, value));
	else
	{
		result = binary_search(array + tmp + 1, size - tmp - 1, value);
		if (result == -1)
			return (-1);
		else
		return (tmp + 1 + result);
	}
}
int main(void)	
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}