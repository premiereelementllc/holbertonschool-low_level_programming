#include "main.h"

/**
 * print_chessboard- echo the chestboard
 * @a:input
 * Return: input an new line
 */

void print_chessboard(char (*a)[8])
{
	int u;
	int p;

	for (u = 0; u <= 8; u++)
	{
		for (p = 0; p <= 8; p++)
		{
			_putchar(a[u][p]);
		}
		_putchar('\n');
	}
}
