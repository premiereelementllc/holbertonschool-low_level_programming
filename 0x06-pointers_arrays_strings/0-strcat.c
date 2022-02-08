#include "main.h"
#include <stdio.h>

/**
 * *_strcat- concatenate two strings.
 * @dest: concatenation
 * @src: string to concatenate
 * Return: string after concatenation
 */

char *_strcat(char *dest, char *src)
{
	int b = 0, i;

	while (dest[b])
		b++;

	for (i = 0; src[i]; i++, b++)
		dest[b] = src[i];
	dest[b] = 0;
	return(dest);
}
