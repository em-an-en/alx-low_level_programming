#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: A pointer to the address of head
 *
 * Description: sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
  listint_t *temp2;

	if (temp == NULL)
		return;

	while (temp)
	{
		temp2 = temp;
    temp = temp->next;
		free(temp);
	}

	temp = NULL;
}
