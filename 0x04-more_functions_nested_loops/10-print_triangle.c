#include "main.h"
/**
 * print_triangle- print a triangle
 * @size: volume of triangle
 */

void print_triangle(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int i, j;
		int space = size - 1;

		for (i = 0; i < size; i++)
		{
			space--;
			for (j = 0; j < size; j++)
			{
				if (j <= space)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
