#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: ....
 **/
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a < 10; a++)
	{
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			_putchar(',');
			c = a * b;
			if ( c > 9)
			{	
				_putchar(' ');
				d = c % 10;
				e= c / 10;
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{	
				_putchar(' ');
				_putchar(c + '0');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}

