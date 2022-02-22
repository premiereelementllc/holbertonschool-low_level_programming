#include "main.h"

/**
 * *_calloc- memory allocation pointer
 *@nmemb: unsigned int
 *@size: unsigned int
 *return: buffer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;

	int long i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc((nmemb * size));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i += 1)
		*(buffer + i) = 0;

	return ((void *)buffer);
}
