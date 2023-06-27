#include "main.h"
#include <string.h>
/**
 * _atoi - convert a string to an integer.
 * @s : char array
 * Return: integer array
 */

int _atoi(char *s)
{
	int i, j, n, len, f, digit;
	/**
	 * i , j for incrementation
	 * n the return value
	 * len length of s
	 **/

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;/* store digit by digit */
			f = 1;/* equals 1 if it is notan integer*/
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;/*the value of f is 1 break loop*/
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

