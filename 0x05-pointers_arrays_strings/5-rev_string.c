#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string
 * @s : string to reverse
 * decription: reversing a string
 */

void rev_string(char *s)
{
	int i, j, k;
	char *c;
	int temp;

	k = strlen(s);

	for ( i = 0, j = k - 1; i < k , j > 0; i++, j--)
	{
		temp = s[i];
		c[j] = temp;
	}

	for ( i = 0, j = 0; i < k, j < k; i++, j++)
	{
		temp = s[i];
		s[i] = c[j];
	}
}
