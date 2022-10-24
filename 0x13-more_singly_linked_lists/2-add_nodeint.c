#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of list
 * @head: pointer to the address of the head
 * @n: int the new node contains
 * Return: NULL, if function fails or the address of new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
