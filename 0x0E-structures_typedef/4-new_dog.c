#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Stores a copy of name and owner.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A dog_t pointer, else NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *pup;

        pup = (dog_t *)malloc(sizeof(dog_t));
        if (pup == NULL)
                return (NULL);

        pup->name = name;
        pup->age = age;
        pup->owner = owner;

        return (pup);
}
