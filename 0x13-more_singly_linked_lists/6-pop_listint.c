#include "lists.h"
/**
 * pop_listint - a function that deletes the head node.
 * @head: pointer.
 * Return: 0 or data.
 */

int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = NULL;
	return (data);
}
