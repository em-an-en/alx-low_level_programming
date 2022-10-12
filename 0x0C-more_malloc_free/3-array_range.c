#include "main.h"

/**
 * array_range - creates an array range
 * @min: first value of array
 * @max: last value of array
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = min++;
	}

	return (array);
}
