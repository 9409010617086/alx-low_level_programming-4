#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: Interger parameter to count all number of arguments
 * @argv: Argument vector.
 *
 * Return: 0 if successful, and 1 if unsuccessful.
 */

int main(int argc, char *argv[])
{
	int count;
	int addition = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (count = 0; count < argc; count++)
	{
		if (atoi(argv[count]) % 2 != 0 || atoi(argv[count]) % 2 != 1)
		{
			printf("Ërror\n");
			return (1);
		}
		else
		{
			addition += atoi(argv[count]);
		}
	}

	printf("%d\n", addition);
	return (0);
}
