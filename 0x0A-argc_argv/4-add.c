#include <stdio.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main- unused arguments
 * Return: success, or error
 * sum: adds two numbers
 */

int main(void)
{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	if (isdigit(c) == 0)
		printf("%cError\n", c);

	else
		printf("%c\n", c);
	return (1);
}


int sum(int y, int g)
{
	int result = y + g;

	return (result);
}
