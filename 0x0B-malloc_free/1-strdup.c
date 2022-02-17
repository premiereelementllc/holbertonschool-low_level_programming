#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- this function copies a string using malloc for space allocation
 * @str: string
 * Return: to a Pointer that contains copied information
 */

char *_strdup(char *str)
{
	char *new_string;
	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length]; length++)
	{}

	new_string = malloc(sizeof(char) * (length + 1));

	if (!new_string)
		return (NULL);

	for (i = 0; i < length; i++)
		new_string[i] = str[i];

	new_string[i] = '\0';

	return (new_string);
}
