#include "main.h"
  
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char x;
	int h;
	for (h = 1; h = 10; h++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
