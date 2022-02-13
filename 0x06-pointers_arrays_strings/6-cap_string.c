#include "holberton.h"

/**
 * *cap_string- function that capitalizes all words of a string.
 * @j: pointer
 *Return: on pointer
 */

char *cap_string(char *j)
{
	char *o = j;
	char *boom = " \t\n,;.!?\"(){}";
	int n = 0, z = 1;

	while (*j)
	{
		if (z)
		{
			if (*j >= 'a' && *j <= 'z')
				*j -= 'a' - 'A';
			z = 0;
		}
		for (n = 0; boom[n]; n++)
		{
			if (*j == boom[n])
				z = 1;
		}
		j++;
	}
	return (o);
}


