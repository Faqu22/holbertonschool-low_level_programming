#include "main.h"

void
rev_string(char *s)
{
	int reverse = 0;
	int i = 0;
	int a = 0;

	while (s[i] != '\0')
		i++;
	i--;
	for (; i >= a; i--, a++)
	{
		reverse = s[i];
		s[i] = s[a];
		s[a] = reverse;
	}
}
