#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: ....
 **/
void times_table(void)
{
	int a, b, c;
	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 0; b < 10; b++)
		{
			_putchar(',');
			_putchar(' ');
			c = a * b;
			_putchar(c + '0');
			 
		}
		_putchar('$');
		_putchar('\n');
	}
}

