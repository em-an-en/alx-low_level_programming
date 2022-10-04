#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter
 * @str: The string to be duplicated
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, size = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		size++;

	duplicate = malloc(sizeof(char) * (size + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[size] = '\0';

	return (duplicate);
}
