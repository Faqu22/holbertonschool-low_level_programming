#include "variadic_functions.h"
/**
 * print_numbers - prints the numbers dated.
 * @separator: is a separator what include ", ".
 * @n: numbers dated.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int cont;

	va_start(list, n);
	for (cont = 0; cont < n; cont++)
	{
		if (cont != n - 1 && separator != NULL)
			printf("%i%s", va_arg(list, const unsigned int), separator);
	}
	printf("%i\n", va_arg(list, const unsigned int));

}
