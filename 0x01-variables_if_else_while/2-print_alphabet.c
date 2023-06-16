#include <stdio.h>
#include <stdlib.h>
/*
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return : always 0
 *
*/
int main(void)
{
	char m;

	for (m='a'; m <= 'z'; m++)
	{	putchar(m);
	}
	putchar('\n');
	return(0);
}

