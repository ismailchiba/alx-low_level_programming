#include "main.h"
/*
 * jack_bauer - every minute of the day of jack bauer
 * Return: no return
 **/
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a < 2 && b < 10) || (a < 3 && b < 4))
			{
				for (c = 0; c < 6; c++)
				{
					for (d = 0; d < 10; d++)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(":");
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
