#include <stdio.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main- unused arguments
 * Return: success, or error
 * sum: adds two numbers
 */

int sum(int, int)
int main()

{
	char c;

	printf("Enter a character: ");
	scanf("%c", &c);

	if (isdigit(c) == 0)
		printf("%cError\n", c);

	else
		printf("%c\n", c);
	return (0);
}

int num1, num2, total;

{
	scanf("%d %d", &num1, &num2);
	total = sum(num1, num2);
	printf("%d", total);
	getch();
	return (0);
}

int sum(int a, int b)
{
	int result=a+b;

	return (result)
}
