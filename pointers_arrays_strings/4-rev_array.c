#include "main.h"

void
reverse_array(int *a, int n)
{
	int initial = 0;
	int reverse = 0;

	n = n - 1;
	while (n > initial)
	{
		reverse = a[n];
		a[n] = a[initial];
		a[initial] = reverse;
		n--;
		initial++;

	}

}
