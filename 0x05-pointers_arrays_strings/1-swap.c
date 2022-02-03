#include "main.h"

/**
 * swap_int- a function that swaps the values of two integers
 * @a: return value of b
 * @b: return value of a
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
