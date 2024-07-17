#include "search_algos.h"

/**
 * print_array - Prints the contents of an array.
 * @array: The source of the array to print.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * binary_search_index - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @L_index: lift index
 * @R_index: right index
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if value is not present
 * in array or if array is NULL
 */
int binary_search_index(int *array, size_t L_index, size_t R_index, int value)
{
	size_t mid;

	if (L_index > R_index || !array)
		return (-1);

	print_array(array, L_index, R_index);

	mid = L_index + (R_index - L_index) / 2;

	if (array[mid] == value)
	{
		return (mid);
	}
	if (array[mid] > value)
		return (binary_search_index(array, L_index, mid - 1, value));
	else
		return (binary_search_index(array, mid + 1, R_index, value));
}
