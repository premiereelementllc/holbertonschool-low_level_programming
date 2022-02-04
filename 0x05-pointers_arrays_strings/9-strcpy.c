#include "main.h"

/**
 * *_strcpy- function that copies the string pointed to by src
 * @dest: character
 * @src: character
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	for (; src[j] && dest[j]; j++)
		dest[j] = src[j];

	dest[j] = '\0';
	return (dest);
}
