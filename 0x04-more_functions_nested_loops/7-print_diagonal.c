#include "main.h"

/*
 *print_diagonal - draws a diagonal line on the terminal
 *@n is the number of times the character \
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <n ; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}
