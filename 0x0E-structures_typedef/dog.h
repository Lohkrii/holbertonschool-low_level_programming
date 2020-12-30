#ifndef DOG_H_
#define DOG_H_

/**
* struct dog - New data type for a dog
* @name: First element
* @age: Second element
* @owner: Third element
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H_ */
