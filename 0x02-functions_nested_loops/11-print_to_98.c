#include "main.h"
/**
 * print_to_98- print all numbers
 * @n: print from n to 98
 * Return: void, n to 98
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	printf("%d\n", n);
}
