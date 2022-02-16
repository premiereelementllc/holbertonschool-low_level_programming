#include <stdlib.h>
#include <stdio.h>

/**
 * main - print arguments
 * @argc: count arguments
 * @argv: arguments unused
 * Return: (success)
 */

int main(int argc, char **argv)
{
	while (argc--)
	printf("%s\n", *argv++);
	return (EXIT_SUCCESS);
}
