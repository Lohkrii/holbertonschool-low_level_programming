#include "dog.h"

/**
* init_dog - Initializes a variable of type struct.
* @d: Pointer to memory location of variable to be initialized.
* @name: Pointer to memory location for name.
* @age: Age of dog.
* @owner: Pointer to memory location for owner's name.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
