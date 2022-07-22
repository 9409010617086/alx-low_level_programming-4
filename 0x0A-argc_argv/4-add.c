#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: Interger parameter to count all number of arguments.
 * @argv: Argument vector.
 *
 * Return: 0 if successful, and 1 if unsuccessful.
 */

int main(int argc, char *argv[])
{
	int i;
	int addition = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) % 1 != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			addition += atoi(argv[i]);
		}
	}

	printf("%d\n", addition);
	return (0);
}
