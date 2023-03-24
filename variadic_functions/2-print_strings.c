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
	char *temp;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (cont = 0; cont < n; cont++)
	{
		if (cont != n - 1)
		{
			temp = va_arg(list, char *);
			printf("%s%s", temp, separator);
		}
	}
	if (n != 0)
	{
		temp = va_arg(list, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
	}
	printf("\n");
	va_end(list);
}
