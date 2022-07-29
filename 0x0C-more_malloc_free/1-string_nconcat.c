#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: A char parameter.
 * @s2: A char parameter.
 * @n: An unsigned int parameter.
 *
 * Return: If function fail, return NULL;
 * else a pointer to the contatenated string is returned.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *add_str;
	unsigned int i;
	unsigned int s1_len = 0;
	unsigned int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{
		s1_len++;
		len++;
	}

	for (i = 0; i < n; i++)
		len++;

	add_str = malloc(sizeof(char) * (len + 1));

	if (add_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		add_str[i] = s1[i];

	for (i = 0; i < n; i++)
	{
		add_str[s1_len + i] = s2[i];
	}

	add_str[len] = '\0';

	return (add_str);
}
