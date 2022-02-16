#include <stdlib.h>
#include <stdio.h>

/**
 * main- print mynamis
 * @argc: counter of arguments
 * @argv: aguments array
 * Return: 1
 */


int main(int argc, char **argv)
{
	if(argc)
		printf("%s\n", argv[0]);
	return (1);
}
