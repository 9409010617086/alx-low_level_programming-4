#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 *
 * @str: A char parameter.
 *
 * Return: NULL if str = NULL or memory is insufficient, else
 * a pointer to str duplicate is returned.
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	duplicate = (char *)malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < (len + 1); i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
