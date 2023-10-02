#include "dog.h"
/**
 *
 *
 */

dog_t new_dog{
	char *name;
	float age;
	char *owner;
};

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = { new_dog.name, new_dog.age, new_dog.owner};
	return (0);
	if (!new_dog)
		return (NULL);
}
