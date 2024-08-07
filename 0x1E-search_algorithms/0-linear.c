#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */


int linear_search(int *array, size_t size, int value)
{
size_t i;
char buffer[50];

if (!array)
{
return (-1);
}
for (i = 0; i < size; i++)
{
sprintf(buffer, "Value checked array[%lu] = [%d]", i, array[i]);
puts(buffer);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
