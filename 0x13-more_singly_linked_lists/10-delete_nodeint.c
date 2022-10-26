#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at list index
 * @head: A pointer to the address of head
 * @index: The index of the node to be deleted
 * Return: 1, if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp2, *temp = *head;
	unsigned int i;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);
	return (1);
}
