#include "variadic_functions.h"
/**
 * print_strings - prints the strings.
 * @separator: is a separator what include ", ".
 * @n: strings dated.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int cont;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (cont = 0; cont < n; cont++)
	{
		if (cont != n - 1)
		{
			if (va_arg(list, char *) == NULL)
				printf("(nil)");
			else
				printf("%s%s", va_arg(list, char *), separator);
		}
	}
	if (n != 0)
		printf("%s", va_arg(list, char *));
	printf("\n");
	va_end(list);
}
