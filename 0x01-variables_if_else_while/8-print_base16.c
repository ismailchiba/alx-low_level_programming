#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program,
 * description: prints all numbers of base 16,
 * followed by a new line
 * Return:Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	/*loop for to print numbers*/
	for (a = '45'; a <= '58'; a++)
	{	putchar(a);
	}
	/*loop for to print alphabet in lowercase */
        for (m = 'a'; m <= 'f'; m++)
        {       putchar(m);
        }
	putchar('\n');
	return (0);
}
