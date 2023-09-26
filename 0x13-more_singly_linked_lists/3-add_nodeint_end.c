#include "lists.h"
/**
 * *add_nodeint_end - a function that adds a new node at the end.
 * @head: pointer to list.
 * @n: interger.
 * Return: NULL or end.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *now = *head;

	if (end == NULL || head == NULL)
	{
	free(end);
	return (end);
	}
		end->n = n;
		end->next = NULL;

		if (*head == NULL)
		{
			*head = end;
		}
		else
		{

		now = *head;

			while (now->next != NULL)
			{
				now->next = now;
			}
				now->next = end;
		}
					return (end);
}
