#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function
 * @array: array of elements
 * @size: size of array
 * @action: function to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
