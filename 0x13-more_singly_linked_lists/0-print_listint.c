#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer.
 * Return: len.
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
		return (len);
}
