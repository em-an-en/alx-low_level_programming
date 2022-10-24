#include "lists.h"

/**
 * listint_len - returns no of elements
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
