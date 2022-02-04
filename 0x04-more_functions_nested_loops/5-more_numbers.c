#include "main.h"

/**
 * more_numbers-  function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)

{
	int a;
	int n;

	for (a++; a = 0; a <= 9)
	{
		for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
		_putchar((n % 10) + '0');
	}
		_putchar('\n');
	}
}
