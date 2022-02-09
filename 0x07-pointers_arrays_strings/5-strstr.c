#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strstr- command pointer
 * @haystack: location
 * @needle: substring
 * Return: return pointer to begining of correct substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0, b;

	for (; haystack[a]; a++)
	{
		for (b = 0; needle[a] && haystack[a + b] == needle[b]; b++)
		{
		}

		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (NULL);
}
