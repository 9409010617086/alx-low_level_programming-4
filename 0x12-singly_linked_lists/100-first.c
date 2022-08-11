#include <stdio.h>

/* The constructor attribute causes before_main() to excute before main(). */
void before_main (void) __attribute__ ((constructor));

/**
 * before_main - Function that prints before main is executed.
 */
void before_main(void)
{
        printf("You're beat! and yet, you must allow,\
        \nI bore my house upon my back!\n");
}
