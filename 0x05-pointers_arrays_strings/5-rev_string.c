#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string
 * @s : string to reverse
 * decription: reversing a string
 */

void rev_string(char *s)
{
	int i, k;
	char temp;

	k = strlen(s);

	for (i = 0; i < k; i++)
	{
		k--;
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
	}
}
