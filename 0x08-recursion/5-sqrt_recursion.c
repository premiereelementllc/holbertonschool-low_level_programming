#include "main.h"

/**
 * _sqrt- function for natural square root of a number
 * @n: plurualar square number
 * @i: integer to square root
 * Return: -1 if no natural square exists
 */

int _sqrt(int n, int i)
{
	if (n == i)
		return (-1);
	if (n / i == i && n % i == 0)
		return (i);
	return (_sqrt(n, ++i));
}

/**
 * _sqrt_recursion- function for natural square root of a number
 * @n: plurualar square number
 * Return: square root from n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, 2));
}
