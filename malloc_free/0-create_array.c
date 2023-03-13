#include "main.h"
#include <stdlib.h>

char
*create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (arr);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
