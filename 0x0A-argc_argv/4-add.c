#include <stdio.h>
#include <ctype.h>

/**
 * main- unused arguments
 *Return: success, or error
 */

int main(void)
{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	if (isdigit(c) == 0)
		printf("%c\n", c);
	else
		printf("%cError\n", c);
	return (1);
}
