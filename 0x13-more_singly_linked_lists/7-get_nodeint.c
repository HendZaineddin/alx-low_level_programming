#include "lists.h"
/**
 * *get_nodeint_at_index -  a function that returns the nth node.
 * @head: pointer.
 * @index: index of node.
 * Return: first or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *first = head;
	unsigned int nth = 0;

	while (first != NULL)
	{
		if (nth == index)
		{
			return (first);
		}
		nth++;
		first = first->next;
	}
	return (NULL);
}
