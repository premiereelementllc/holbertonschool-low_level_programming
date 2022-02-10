
#include "main.h"

/**
 * factorial- return factorial of n
 * @n: points to number
 * Return: factorial nubmer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
