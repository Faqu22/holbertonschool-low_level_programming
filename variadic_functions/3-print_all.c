#include "variadic_functions.h"

int printInt(int b);
int printChar(int b);
int printFloat(double b);
int printString(char *b);
/**
 * print_all - prints the all var.
 * @format: format of variables.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, l = 0, a = 0;
	char c = '\0';
	float f = 0.0;
	char *s = NULL;

	va_start(list, format);
	while (format && format[i])
	{
		a = 0;
		switch (format[i])
		{
			case 'c':
				c = va_arg(list, int);
				a = printInt(c);
				break;
			case 'i':
				l = va_arg(list, int);
				a = printChar(l);
				break;
			case 'f':
				f = va_arg(list, double);
				a = printFloat(f);
				break;
			case 's':
				s = va_arg(list, char *);
				if (s == NULL)
					s = "(nil)";
				a = printString(s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && a == 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

int
printInt(int b)
{
	printf("%c", b);
	return (1);
}
int
printChar(int b)
{
	printf("%i", b);
	return (1);
}
int
printFloat(double b)
{
	printf("%f", b);
	return (1);
}
int
printString(char *b)
{
	printf("%s", b);
	return (1);
}
