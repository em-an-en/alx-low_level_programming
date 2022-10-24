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
	int node_data;

	if (*head == NULL)
		return (0);

	temp = *head;
	node_data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (node_data);
}
