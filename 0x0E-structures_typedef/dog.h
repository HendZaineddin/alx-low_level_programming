#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
