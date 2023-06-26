#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str : the string
 * description : function that prints half of a string, followed by a new line
 */

void puts_half(char *str)
{
	int i, j;

	j = strlen(str);

	if (j % 2 == 1)
	{
		j++;
	}

	for (i = j / 2; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
