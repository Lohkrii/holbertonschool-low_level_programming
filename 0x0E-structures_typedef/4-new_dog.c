#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *s);

/**
* new_dog - Creates a new dog from a dog_t struct
* @name: Pointer to memory location where the dog name string is stored
* @age: Age of dog
* @owner: Pointer to memory location where the owner name is stored
* Return: Pointer to location where the new dog is stored
*         : NULL if failure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;
	char *ownr;
	char *dname;

	dog_ptr = malloc(sizeof(dog_t));
	if (dog_ptr == NULL)
		return (NULL);

	dname = _strcpy(name);
	if (dname == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	ownr = _strcpy(owner);
	if (ownr == NULL)
	{
		free(dname);
		free(dog_ptr);
		return (NULL);
	}
	dog_ptr->age = age;
	dog_ptr->name = dname;
	dog_ptr->owner = owner;
	return (dog_ptr);
}

/**
* _strlen - Returns the length of a string.
* @str: Pointer to a string at address.
* Return: The length of a string.
*/

int _strlen(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
		;
	return (idx + 1);
}

/**
* _strcpy - Copies string to 'dest'.
* @src: Source of string to copy
* Return: The address of the copied string.
*/

char *_strcpy(char *src)
{
	int idx, len;
	char *dest;

	len = _strlen(src);

	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);

	for (idx = 0; idx < len; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
