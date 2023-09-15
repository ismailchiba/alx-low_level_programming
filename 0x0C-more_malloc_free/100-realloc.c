#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - same as realloc
 * @ptr: pointer first
 * @old_size: size of the allocated memory
 * @new_size: new size to allocate
 *
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_N;
	char *ptr_O;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr_N = malloc(new_size);
	if (!ptr_N)
		return (NULL);

	ptr_O = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr_N[i] = ptr_O[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_N[i] = ptr_O[i];
	}

	free(ptr);
	return (ptr_N);
}

