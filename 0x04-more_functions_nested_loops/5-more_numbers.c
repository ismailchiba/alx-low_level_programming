#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *  followed by a new line
 * Return : ....
 **/
void more_numbers(void)
{
	int i,j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
