#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separation caracter
 * @n: number of elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, j;
	char *s;

	va_start(args, n);

	i = (int)n;

	for (j = 0; j < i; j++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (j < i - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
