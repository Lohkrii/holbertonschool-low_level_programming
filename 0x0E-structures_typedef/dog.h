#ifndef DOG_H_
#define DOG_H_

#include <stdlib.h>
#include <stdio.h>

/**
* struct dog - New data type struct of a dog.
* @name: Name variable of dog.
* @age: Age variable of dog.
* @owner: Owner variable of dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Initializes dog struct */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prints dog */
void print_dog(struct dog *d);

/* Another struct for dog */
typedef struct dog dog_t;

/* Creats new dog */
dog_t *new_dog(char *name, float age, char *owner);

/* Frees dog memory*/
void free_dog(dog_t *d);

int _strlen(char *s);
char *_strcpy(char *s);

#endif /* DOG_H_ */
