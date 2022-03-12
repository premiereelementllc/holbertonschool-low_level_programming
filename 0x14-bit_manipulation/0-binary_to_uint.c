#include "main.h"

/**
 * binary_to_unit - transform string binary to unsigned int
 * @b: pointer to string
 * Return: b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number, i;

	if (!b)
		return (0);

	for (i = 0, number = 0; b[i]; i++)
	{
		number <<= 1;
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number |= (b[i] - '0');
	}
	return (number);
}
