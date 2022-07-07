#include <stdio.h>

/**
 * main - Prints 1 - 100; for multiples of three prints Fizz;
 * for multiples of 5, prints Buzz;
 * for multiples of both 3 and 5, prints FizzBuzz.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
        int num;

	for (num = 1; num <= 100; num++)
        {
                if (num % 3 == 0 && num % 5 == 0)
                        printf("FizzBuzz");

                else if (num % 3 == 0)
                        printf("Fizz");

                else if (num % 5 == 0)
                        printf("Buzz");

		else
                        printf("%d", num);

                if (num != 100)
                        putchar(' ');
        }
        putchar('\n');

        return (0);
}
