#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - point to malloc_checked with void specifier
 * @b: specifies all int and chars
 * return: pointer void
 */

void *malloc_checked(unsigned int b)
{
	void *run;

	run = malloc(b);
	if (!run)
		exit(98);
	return (run);
}
