#include "main.h"

int
_islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		printf("1");
	}
	else if (c <= 65 && c >= 90)
	{
		printf("0");
	}
	return (0);
}
