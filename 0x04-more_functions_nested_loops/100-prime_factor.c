#include <stdio.h>

/**
 *
 * main -  a program that finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (Success).
 */

int main()
{
   long int n = 612852475143;
   long int div = 2;
   long int ans = 0;
   long int prime;

   while(n != 0)
   {
      if (n % div != 0)
         div = div + 1;

      else
	  {
         prime = n;
         n = n / div;

         if(n == 1)
		 {
            printf("%d", prime);
            ans = 1;
            break;
         }
      }
   }

   system("pause");
   return (0);
}
