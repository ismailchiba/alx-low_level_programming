#include <stdio.h>

void cons(void) __attribute__ ((constructor));

/**
 * cons - prints a sentence before the main
 * function is executed
 */
void cons(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
