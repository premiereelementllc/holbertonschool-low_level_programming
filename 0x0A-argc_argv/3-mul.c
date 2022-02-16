#include <stdlib.h>
#include <stdio.h>

/**
 * main- multiply two numbers
 * @argc: count arguments
 * @argv: arguments
 * Return: (success)
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));

	return (EXIT_SUCCESS);
}
