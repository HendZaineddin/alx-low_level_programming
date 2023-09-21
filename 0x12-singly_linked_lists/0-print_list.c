#include "lists.h"
/**
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	int i;

	while(h)
	{
		printf("[%ld] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (strlen(h->str));
}
