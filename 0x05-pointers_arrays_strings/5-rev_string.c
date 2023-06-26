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
	char temp;

	j = k = strlen(s);

	for (i = 0; i < j; i++)
	{
		k--;
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
	}
}
