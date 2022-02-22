#include "main.h"

/**
 * string_nconcat- concatenates 2 strings
 *@s1: pointer 1
 *@s2: pointer 2
 *@n: unsigned int
 *return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a;
	unsigned int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a]; a++)
	{}
	for (b = 0; s2[b] && b < n; b++)
	{}
	ptr = malloc((a + b + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
		ptr[a] = s1[a];
	for (b = 0; s2[b] && b < n; b++)
		ptr[a + b] = s2[b];
	ptr[a + b] = '\0';
	return (ptr);
}
