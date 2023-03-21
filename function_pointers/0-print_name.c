#include "function_pointers.h"
/**
 * print_name - Print the name.
 * @f: is the pointer of function.
 * @name: Is the name selected.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
