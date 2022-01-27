/**
 * main -starting program
(*
 *Description: prints the phrase and a new line)?
 *Return: return (0) required function
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
	int x;

	for (x = 0; x < 10; x++)
{
	putchar (x % 10 + '0');
	if (x != 9)
	{
		putchar(44);
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
