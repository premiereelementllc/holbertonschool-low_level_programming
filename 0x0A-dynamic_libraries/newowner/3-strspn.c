#include "main.h"

/**
 * _strspn- gets lenght of the prefix substring
 * @s: string to be accessed
 * @accept: substring
 * Return: unsinged int number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	int term = 0;

	for (a = 0; s[a]; a++)
	{
		term = 0;
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				term = 1;
		}
		if (!term)
			break;
	}
	return (a);
}
