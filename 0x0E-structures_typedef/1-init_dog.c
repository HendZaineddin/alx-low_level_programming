#include <stdio.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable.
 * @d: pointer
 * @name:the dog name.
 * @age:the age.
 * @owner:the owner name.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
