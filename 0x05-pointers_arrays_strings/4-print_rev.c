#include "main.h"
#include <string.h>
/**
 * print_rev - print in reverse
 * @s : the string
 * Description: prints a string, in reverse, followed by a new line.
 */

void print_rev(char *s)
{
	int i;

	for (i = length(s); i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
