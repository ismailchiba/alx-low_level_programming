#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size input
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
