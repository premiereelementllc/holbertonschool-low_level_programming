#include "main.h"
#include <stdio.h>
 /**
  * puts_half- function that prints half of a string and then a new line
  * @str: characters
  */

void puts_half(char *str)
{
	long l = 0, m, a;

	while (str[l])
		l++;
	if (l % 2 == 0)
		m = 1 / 2;

	else
		m = (l - 1) / 2;
	for (a = m; str[1]; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
