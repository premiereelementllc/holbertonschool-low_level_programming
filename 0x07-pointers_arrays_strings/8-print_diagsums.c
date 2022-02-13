#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the sum of the two diagonals
 * @a: inputs
 * @k: pural variable pointer
 * @size: the square size
 *Return: printf
 */

void print_diagsums(int *a, int size)
{
	int k;
	int sidea = 0;
	int sideb = 0;

	for (k = 0; k < size * size; k++)
	{
		if (k % (size + 1) == 0)
		{
			sidea += a[k];
		}
		if (k % (size - 1) == 0 && (k > 0 && (k < (size * size - 1))))
		{
			sideb = a[k];
		}
	}
	printf("%d, %d\n", sidea, sideb);
}
