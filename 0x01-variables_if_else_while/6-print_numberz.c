#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program,
 * description: prints numbers, followed by a new line
 * Return:Always 0 (Success)
 */
int main(void)
{
	int m;
	/*loop for to print numbers*/
	for (m = 48; m < 58; m++)
	{	putchar(m);
	}
	putchar('\n');
	return (0);
}
