#include "main.h"
#include <stdlib.h>

char
*create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	arr = (char*)malloc(sizeof(char) * size);
	if (size < 1)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
