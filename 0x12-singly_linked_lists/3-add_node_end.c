#include "lists.h"
/**
 * add_node_end -  a function that adds a new node at the end of a list_t list.
 * @head: pointer.
 * @str: string.
 * Return: NULL or end_head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_head = malloc(sizeof(list_t));
	list_t *end = *head;

	if (end_head == NULL || head == NULL)
	{
		return (NULL);
	}
	end_head->str = strdup(str);
	if (!end_head->str)
	{
		free(end_head);
		return (NULL);
	}
	end_head->len = strlen(end_head->str);
	if (head != NULL)
	{
		while (end->next)
		{
			end->next = end;
		}
			end->next = end_head;
	}
	else
		*head = end_head;
	return (end_head);
}
