#include <stdio.h>
#include <ctype.h>

/**
 * main- unused arguments
 *Return: success, or error
 */

int main(void)
{
	char c;

	printf("Entera character: ");
	scanf("%c", &c);

	if (isdigit(c) == 0)
		printf("%c Error\n", c);
	else
		printf("%c\n", c);
	return (0);
}
