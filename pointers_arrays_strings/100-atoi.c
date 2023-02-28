#include "main.h"

int
_atoi(char *s)
{
	int filter = 0;
	int sign = 1;
	int cont = 0;

	while (s[cont])
	{
		if (s[cont] >= 48 && s[cont] <= 57)
		{
			filter = filter * 10 + (s[cont] - 48);
		}
		if (s[cont] == 45)
		{
			sign = sign * -1;
		}
	cont++;
	}
	filter = filter * sign;
	if (filter != 0)
	{
		return (filter);
	}
	else
	{
		return (0);
	}
}
