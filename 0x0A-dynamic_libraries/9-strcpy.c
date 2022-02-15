#include "main.h"

/**
 * _puts- function that prints a string, followed by a new line
 * @str: string command
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		*(dest + x) = *(src + x);
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
