#include "holberton.h"

/**
 * _strcmp- compare two stirngs
 * @s1: string
 * @s2: srting
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int fill = 0;

	while (*s1 && *s2)
	{
		fill = *s1++ - *s2++;
		if (fill != 0)
			return (fill);
	}
	return (fill);
}
