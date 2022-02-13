#include "holberton.h"

/**
 * *leet- function that encodes a string of leters into numbers
 * @input: array of letters
 * Return: output
 */

char *leet(char *input)
{
	char *output = input;
	char *letter = "ltoea";
	char *num = "17034";
	int i;

	while (*input)
	{
	       for (i = 0; letter[i]; i++)
		{
			if (*input == letter[i] || *input == letter[i] - 'a' + 'A')
			*input = num[i];
		}
		input++;
	}
	return (output);
}
