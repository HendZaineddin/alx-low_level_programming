#include "lists.h"
/**
 * insert_nodeint_at_index - Write a function that inserts a new node.
 * @head: a pointer.
 * @idx: a Certain Position.
 * @n: the data.
 * Return: NULL or address.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, j;
	listint_t *address, *new = malloc(sizeof(listint_t));

	new->n = n + 1;
	if (*head != NULL || new != NULL)
	{
		for (i = 0; i <= idx - 1; i++)
		{
			new->next = (*head)->next;
		}
		address = new->next;
		return (address);
		for (j = idx + 1; *head != NULL; j++)
		{
			new->next = (*head)->next;
		}
	}
	new->next = NULL;
	return (NULL);
}
