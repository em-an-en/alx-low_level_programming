#include "lists.h"

/**
 * add_nodeint_end - Adds node to the end of list
 * @head: A pointer to the address of the head
 * @n: int the new node contains
 *
 * Return: If the function fails - NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *last;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}

	return (newNode);
}
