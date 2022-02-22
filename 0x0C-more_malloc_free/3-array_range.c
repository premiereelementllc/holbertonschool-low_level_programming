#include "main.h"

/**
 *array_range- entry point
 *@min: min number
 *@max: max number
 *Return: array or NULL
 */

int *array_range(int min, int max)
{
	int length = (max - min) + 1, *array, i = 0;

	if (min > max)
		return (NULL);
	array = malloc(length * sizeof(*array));
	if (!array)
		return (NULL);

	for (i = 0; min < max; min++, i++)
		*(array + i) = min;
	return (array);
}
