#include <stdio.h>

int
main()
{
	long n = 612852475143;
	long m = n;
	long l;

	for (l = 1; l < n; l++)
	{
		if (m == l)
		{
			printf("%ld\n", l);
			break;
		}
		if (m % l == 0 && l != 1)
		{
			n = m;
			printf("%ld, ", l);
			m = n / l;
			l = 0;
		}
	}
	return (0);
}

