#include "lists.h"

/**
 * pop_listint - Deletes the head node of list
 * @head: A pointer to the address of head
 *
 * Return: If the linked list is empty - 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (*head == NULL)
		return (0);

	temp = *head;
	node = temp->n;
	*head = temp->next;

	free(temp);

	return (node);
}
