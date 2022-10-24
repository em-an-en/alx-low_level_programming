#include "lists.h"

/**
 * free_listint - frees the list.
 * @head: A pointer to the head of list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
  listint_t *temp2;

	while (temp != NULL)
	{
		temp2 = temp;
    temp = temp->next;
		free(temp);
	}
}
