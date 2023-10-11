#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog
 * @name: name of daog
 * @age: it's age
 * @owner: it's owner
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
#endif
