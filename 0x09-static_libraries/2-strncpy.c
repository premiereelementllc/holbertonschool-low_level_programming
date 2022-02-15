#include "main.h"

/**
 * _memcpy- copy memory from s
 * @dest: memory
 * @src: source
 * @n: plural character copy
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
