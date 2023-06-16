#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program,
 * description: prints all possible different combinations of three digits,
 * followed by a new line
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
