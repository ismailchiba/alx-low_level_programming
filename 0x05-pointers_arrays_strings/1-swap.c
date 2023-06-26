#include "main.h"

/**
 * swap_int : swap up to value
 * @a : first value, @b : second value 
 * Description : using pointers to swap up 2 values
 */

void swap_int(int *a, int *b)
{
	int temp;/* a varible to store the value of *a */

	temp = *a;
	*a = *b;
	*b = temp;
}
