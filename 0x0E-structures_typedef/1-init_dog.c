#include "dog.h"
/**
 * init_dog - initialize struct dog
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: always 0 success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
