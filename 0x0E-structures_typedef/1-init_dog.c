#include "dog.h"

/**
 * init_dog - unction that initialize a variable of type struct dog.
 * @d: Pointer of type dog.
 * @name: A pointer to char parameter.
 * @age: An integer parameter.
 * @owner: A pointer to char parameter.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
