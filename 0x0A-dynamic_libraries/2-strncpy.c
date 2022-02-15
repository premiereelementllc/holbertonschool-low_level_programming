#include "main.h"

/**
 * _memcpy- copy memory from s
 * @dest: memory
 * @src: source
 * @n: plural character copy
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (src[x] != 0 && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
