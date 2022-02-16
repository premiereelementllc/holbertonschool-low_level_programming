#include <stdio.h>
#include <stdlib.h>

/**
 * main- print number of arguments
 * @argc: count arguments from command line
 * @argv: arguments unused
 * Return: (1)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	argv = NULL;
	printf("%d\n", argc);
	return (1);
}
