#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: input
 * Return: ...
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*s == '\0')
		_putchar('\0');
}
