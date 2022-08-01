#ifndef DOG_H
#define DOG_H

/**
 * dog - struct for a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the onwer of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the type struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
