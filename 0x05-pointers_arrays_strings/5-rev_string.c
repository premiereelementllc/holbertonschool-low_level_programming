#include "main.h"
#include <stdio.h>

/**
 * rev_string- function that reverses a string
 * @s: character s
 */

void rev_string(char *s)
{
	int n = 0, fin = 0;
	char c;

	while (s[fin] != 0)
		fin++;
	fin--;

	while (n < fin)
	{
		c = s[n];
		s[n] = s[fin];
		s[fin] = c;
		n++;
		fin--;
	}
}
