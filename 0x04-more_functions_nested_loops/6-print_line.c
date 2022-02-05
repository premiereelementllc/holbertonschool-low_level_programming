#include "main.h"

/**
 * print_line- make a function that draws a straight underscore line
 *@n: reference to main inputs for n
 */

void print_line(int n)

{
	int a;

	if (n < 1)
	_putchar('\n');

	else
	{
	for (a = 1; a <= n; a++)
	_putchar('_');
	_putchar('\n');
	}

}
