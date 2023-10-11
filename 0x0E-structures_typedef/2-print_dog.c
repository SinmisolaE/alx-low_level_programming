#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints dog's identity
 * @d: identity passed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

		if (d->name == NULL)
			printf("Name: (nil)");
		if (d->age == NULL)
			printf("Age: (nil)");
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Name: %s\nAge: %lf\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
