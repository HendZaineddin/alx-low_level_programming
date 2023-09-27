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
		*head = *head->next;
		free(replace);
		return (1);
	}

	listint_t *new = *head;
	listint_t *zero = NULL;

	while (new != NULL && i < index)
	{
		new = zero;
		new->next = new;
		i++;
	}
	if (new == NULL)
		return (-1);

	zero->next = new->next;
	free(new);
	return (1);
}
