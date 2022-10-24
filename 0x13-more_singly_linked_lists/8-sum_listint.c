#include "lists.h"

/**
 * sum_listint - Calculates the sum of all list elements
 * @head: A pointer to the head of list.
 *
 * Return: If the list is empty - 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
