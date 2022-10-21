#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: head of linked list
 *
 * Return: length of list
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{

		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			ptr = ptr->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
			count++;
		}
	}
	return (count);
}
