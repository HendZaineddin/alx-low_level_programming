#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog.
 * @d: pointer.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		if (d->age)
		{
		printf("Age: %f\n", d->age);
		}
		else if (!d->age)
		{
			printf("Age: %s\n", "(nil)");
		}
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
