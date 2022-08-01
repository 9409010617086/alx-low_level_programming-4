#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that free memory allocated to dog.
 * @d: A pointer to struct parameter.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
}
