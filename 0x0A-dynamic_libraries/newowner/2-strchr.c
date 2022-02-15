#include <stddef.h>

/**
 * _strchr- command pointer
 * @s: string to search characters
 * @c: pointer to find c
 * Return: completes loop upon recognizing first occurence of c
 */

char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j]; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	if (s[j] == c)
		return (&s[j]);
	return (NULL);
}
