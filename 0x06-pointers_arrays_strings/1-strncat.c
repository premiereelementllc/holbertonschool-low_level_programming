#include "holberton.h"
#include <stdio.h>

/**
 * _strncat- concat to dest
 * @dest: string
 * @src: string to dest
 * @n: indicator of plural character outputs
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *swing = dest;

	while (*dest)
	{
		dest++;
	}


		for (; n > 0; n--)
		{
			if (*src)
			{
				*dest++ = *src++;
			}
			else
			{
				*dest = '\0';
				break;
			}
		}

		return (swing);
}
