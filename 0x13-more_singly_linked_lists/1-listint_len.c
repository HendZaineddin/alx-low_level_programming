#include "lists.h"
/**
 * listint_len -  a function that returns the number of elements.
 * @h: a pointer.
 * Return: len.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
