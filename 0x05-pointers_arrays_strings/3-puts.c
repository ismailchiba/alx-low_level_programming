#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: the string type char
 * Description: printing a string followed by new line
 */

void _puts(char *str)
{
	int i, j;

	i = 0;
	j = 0;/*length of the array*/
	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	for (i = 0; i < j; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
