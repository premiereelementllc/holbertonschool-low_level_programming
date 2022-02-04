#include <stdio.h>

/**
 * print_array- print array of ints
 * @a: a is a pointer
 * @n: the size
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t < n - 1)
			printf(", ");
	}
	printf("\n");
}
