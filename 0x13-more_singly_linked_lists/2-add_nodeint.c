#include "lists.h"
/**
 * *add_nodeint -  a function that adds a new node at the beginning.
 * @head: pointer to the node.
 * Return: NULL or node.
 * @n: interger.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
