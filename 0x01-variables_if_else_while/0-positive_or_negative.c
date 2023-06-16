#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);/*print 0 is positive*/
	else if (n < 0)
		printf("%d is negative\n", n);/*print 0 is negative*/
	else 
		printf("%d is zero\n", n);/*print 0 is zero*/
	return (0);
}
