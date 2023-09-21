#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointr to struct
 * Return: i.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h == NULL)
		{
			printf("[0] (nil)\n");
		}
		else if (h != NULL)
		{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		}
		i++;
	}
	return (i);
}
