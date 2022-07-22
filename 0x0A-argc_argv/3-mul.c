#include <stdio.h>
#include <stdlib.h>

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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error");
	return (1);
}
