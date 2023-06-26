#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str : the string
 * decription: prints every other character of a string,
 *   starting with the first character, followed by a new line.
 */

void puts2(char *str)
{
	int i;

	for(i = 0; i < '\0'; i += 2)
	{
		_putchar(str[i]);
	}
}
