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
	char x;

	for (x = 'z'; x >= 'a'; --x)
	putchar(x);
	putchar('\n');
	return (0);
}

