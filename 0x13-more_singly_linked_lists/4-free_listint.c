#include "lists.h"
/**
 * free_listint -  a function that frees a listint_t list.
 * @head: pointer linke.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head->next = head;
		free(current);
	}
}
