#include "lists.h"
/**
 * free_listint -  a function that frees a listint_t list.
 * @head: pointer linke.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head->next = head;
		free(head);
	}
}
