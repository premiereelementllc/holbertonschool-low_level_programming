#include "main.h"

/**
 * print_rev - prints a string  print a string in reverse new line at the end
 * @s: character s
 */

void print_rev(char *s)
{
	int n = 0;

	while (s[n] != 0)
		n++;
	n--;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
