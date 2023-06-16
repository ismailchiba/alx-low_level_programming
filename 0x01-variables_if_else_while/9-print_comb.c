#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program,
 * description: prints in reverse the alphabet in lowercase,
 * followed by a new line
 * Return:Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
