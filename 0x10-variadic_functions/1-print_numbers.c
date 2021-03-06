#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: char separator
 * @n: n variatics numbers;
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0, value;

	if (!separator)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		printf("%d", value);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
