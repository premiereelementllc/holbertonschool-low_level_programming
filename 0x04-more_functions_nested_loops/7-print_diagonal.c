#include "main.h"

/**
 * print_diagonal- this function displays a diagonal line
 * @n: is the input from the initialization main page
 */

void print_diagonal(int n)
{
	int k;
	int l;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}
	for (k = 0; k < n; k++)
	{
	for (l = 0; l <= k; k++)
	{
		if (k != 0 && l != 0)
			_putchar(' ');
		if (k == l)
			_putchar('\\');
	}
	_putchar('\n');
	}
}
