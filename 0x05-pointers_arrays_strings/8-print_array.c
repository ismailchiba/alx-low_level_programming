#include "main.h"
#include <stdio.h>
/**
 * print_array - array elements
 * @a:  array of integers
 * @n: n elements of an array
 * Description: function that prints n elements of a array,
 *  followed by a new line
 * Return: ...
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);

	}
	printf("\n");
}
