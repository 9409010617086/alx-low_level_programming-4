#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: Name of a person.
 * @f: Pointer to a function that prints a name.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
