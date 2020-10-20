#include "dog.h"

/**
 * init_dog - Funtion that initialize a variable of type structu dog
 * @d: Adress of struct dof
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
