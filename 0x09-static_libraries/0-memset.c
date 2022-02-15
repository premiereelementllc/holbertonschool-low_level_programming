#include "main.h"
/**
 * _memset- first set of n bytes of memmory
 * @s: pointer to data
 * @b: data to fill
 * @n: plural action
 * Return: s pointer
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;

	return (s);
}
