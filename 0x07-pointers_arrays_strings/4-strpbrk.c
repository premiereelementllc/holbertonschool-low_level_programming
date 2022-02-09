#include "main.h"
#include <stddef.h>

/**
 * _strpbrk- searches command pointer
 * @s: stirng of bytes
 * @accept: bytes found
 * Return: pointer to match accept pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;

	while (s[a])
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
		a++;
	}
	return (NULL);
}
