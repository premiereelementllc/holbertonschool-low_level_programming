#include "main.h"

/**
 * puts2- function that prints every other character of a string
 * @str: pointer to first char in string array
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x])
	{
		if ((x % 2) == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
