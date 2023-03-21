#include "function_pointers.h"

/**
 * array_iterator - Execute any elements of the array.
 *
 * @array: Data structure.
 * @size: Size of the array.
 * @action: function passed by parameters.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont;

	if (array == NULL || action == NULL)
		return;
	for (cont = 0; cont < size; cont++)
	{
		(*action)(array[cont]);
	}
}
