#include "main.h"

/**
 * *_strpbrk - locates any set of bytes in a string
 * @s: string to be searched
 * @accept: bytes to be matched
 * Return: pointer to s, if it matched
 * NULL, if there are no matches
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}

	return ('\0');
}
