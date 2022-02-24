#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - this function is a wrapper of the f function
 * @name: name to print by the f function
 * @f: Function that uses name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
