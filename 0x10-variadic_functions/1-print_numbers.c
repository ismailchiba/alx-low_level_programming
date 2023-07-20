#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - addition of all elements (args)
 * @separator: separation caracter
 * @n: number of elements
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, j;

	va_start(args, n);

	i = (int)n;
	if (separator == NULL)
		return ;
	for (j = 0; j < i; j++)
	{
		printf("%d", va_arg(args, int));
		if (j < i - 1 && separator)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(args);
}
