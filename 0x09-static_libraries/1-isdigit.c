#include "main.h"

/**
 * _isdigit- checks for digit
 * @c: digit outcomes
 * Return: 1 if c is a digit, return 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
