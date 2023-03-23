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
	if (separator == NULL)
		separator = "";
	for (cont = 0; cont < n; cont++)
	{
		if (cont != n - 1)
			printf("%i%s", va_arg(list, const unsigned int), separator);
	}
	if (n != 0)
		printf("%i\n", va_arg(list, const unsigned int));
	va_end(list);

}
