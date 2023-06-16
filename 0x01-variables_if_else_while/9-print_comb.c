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
	char m;
	/*loop for to print alphabet in lowercase in reverse*/
	for (m = 'z'; m >= 'a'; m--)
	{	putchar(m);
	}
	putchar('\n');
	return (0);
}
