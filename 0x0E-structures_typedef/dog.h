#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - dog's struct
 * @name:the name of dog
 * @age: the age
 * @owner: the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
