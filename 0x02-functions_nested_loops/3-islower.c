#include "main.h"
/**
 * _islower - checs for lowercase
 * char = 'c'
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
