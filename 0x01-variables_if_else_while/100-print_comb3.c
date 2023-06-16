#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program,
 * description: prints all possible different combinations of two digits,
 * followed by a new line
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

