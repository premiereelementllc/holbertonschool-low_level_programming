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
	int fly = 0, i;

	while (dest[fly])
		fly++;

		for (i = 0; i < n && src[i] ; i++, fly++)
		dest[fly] = src[i];

		return (dest);
}
