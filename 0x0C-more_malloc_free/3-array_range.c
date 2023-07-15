#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return:pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, i, j;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++)
	{	*(p + j) = i;
		j++;
	}
	return (p);
}
