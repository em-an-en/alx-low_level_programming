#include "lists.h"

/**
 * list_len - get length of linked list
 * @h: pointer to start of list
 *
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
