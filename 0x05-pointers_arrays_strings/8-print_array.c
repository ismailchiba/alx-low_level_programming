#include "main.h"
#include <stdio.h>
/**
 * puts_half - array elements
 * @a :  array of integers
 * @n : n elements of an array
 * description : function that prints n elements of a array,
 *  followed by a new line
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
