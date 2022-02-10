#include "main.h"

/**
 * _pust_recursion- prints a string recursive, followed by a new line.
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
