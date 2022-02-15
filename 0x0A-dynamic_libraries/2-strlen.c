#include "main.h"

/**
 * _strlen- function that returns the length of a string.
 * @s: string length output
 *Return: length of string
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != 0)
		n++;
	return (n);
}
