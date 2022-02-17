#include <stdlib.h>
#include <stdio.h>

/**
 * create_array- creates an array and fills it with c
 * @size: size of the array
 * @c: char to fill array
 * Return: NULL if size<0; or Int or fail
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (!size)
		return (NULL);
	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;
}
