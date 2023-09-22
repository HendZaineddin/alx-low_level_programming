#include "lists.h"
/**
 * add_node -  a function that adds a new node at a list_t list.
 * @head: pointer to head.
 * @str: pointer to string.
 * Return: ptrhead or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptrhead = malloc(sizeof(list_t));

	if  (ptrhead == NULL)
	{
		return (NULL);
	}
	ptrhead->str = strdup(str);
	if (!ptrhead->str)
	{
		free(*head);
		return (NULL);
	}
		ptrhead->next = *head;
		*head = ptrhead;
		ptrhead->len = strlen(ptrhead->str);
		return (ptrhead);
}
