#include "main.h"

/**
 * _calloc - allocates memory like calloc
 * @nmemb: number of elements
 * @size: byte size of each element
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	ptr = p;

	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = '\0';
	}

	return (p);
}
