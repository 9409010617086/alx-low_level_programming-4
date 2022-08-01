#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: A pointer to struct parameter.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{	
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "nil";

	else if (d->owner == NULL)
		d->owner = "nil";

	printf("Name: %s\n", d->name);

	if (d->age > 0)
		printf("Name: %f\n", d->age);
	else
		printf("Name: nil\n");

	printf("Name: %s\n", d->owner);
}
