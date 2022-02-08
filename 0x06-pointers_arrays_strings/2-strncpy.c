#include "holberton.h"

/**
 * _strncpy- copies a string.
 * @dest: array
 * @src:array
 * @n: plural input
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
			if (src[i] == '\0')
			{
				while (i < n)
				{
					dest[i] = '\0';
					i++;
				}
			}
		}
	return (dest);
}
