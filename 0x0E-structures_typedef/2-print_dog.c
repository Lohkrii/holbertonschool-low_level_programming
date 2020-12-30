#include "dog.h"

/**
 * print_dog - Prints the details of the dog struct in question.
 * @d: Is the dog pointer.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
	else
		return;
}
