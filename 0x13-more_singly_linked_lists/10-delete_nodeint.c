#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index.
 * @head: a pointer.
 * @index: an index.
 * Return: 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *replace = *head;
		*head = (*head)->next;
		free(replace);
		return (1);
	}
	else
	{
		listint_t *foo = *head;
		listint_t *zero = NULL;

		while (foo != NULL && i < index)
		{
			foo = zero;
			foo->next = foo;
			i++;
		}
		if (foo == NULL)
		{
			return (-1);
		}
		zero->next = foo->next;
		free(foo);
		return (1);
	}
}
