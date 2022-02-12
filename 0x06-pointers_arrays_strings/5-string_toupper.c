#include "holberton.h"

/**
 * *string_toupper- changes text to uppercase
 * @s: uppercase
 * Return: char*
 */

char *string_toupper(char *a)
{
	char *g = a;

		while (*a)
		{
			if (*a >= 'a' && *a <= 'z')
				*a -= 'a' - 'A';
			a++;
		}
	return (g);
}
