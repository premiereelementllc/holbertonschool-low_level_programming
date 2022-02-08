#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array- reverses array of integers
 * @a: array
 * @n:array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int front;
	int *load = &a[n - 1];

	while (a < load)
	{
		front = *a;
		*a++ = *load;
		*load-- = temp;
	}
}
