#include "main.h"

/**
 *_isalpha- checks for alphabetic character
 *
 * @c: character
 *
 * Return: 0 Always
 */

int _isalpha(int c)

{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
