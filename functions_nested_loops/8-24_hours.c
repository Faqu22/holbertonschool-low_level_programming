#include "main.h"

void
jack_bauer(void)
{
	int dHour = 0;
	int uHour = 0;
	int dMin = 0;
	int uMin = 0;

	while (dHour != 2 || uHour != 4)
	{
		_putchar(dHour + '0');
		_putchar(uHour + '0');
		_putchar(58);
		_putchar(dMin + '0');
		_putchar(uMin + '0');
		_putchar(10);
		uMin++;
		if (uMin == 10)
		{
			dMin++;
			uMin = 0;
		}
		if (dMin == 6)
		{
			uHour++;
			dMin = 0;
		}
		if (uHour == 9)
		{
			dHour++;
			uHour = 0;
		}
	}
}
