#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 *
 * @argc: Interger parameter to count all number of arguments
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int count;
	
	for (count = 0; count < agrc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
