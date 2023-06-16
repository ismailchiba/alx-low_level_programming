#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main : entry point
 *
 *return = always 0
 */
/*Prints the last digit of a randomly generated number
 *and whether it is greater than 5, less than 6, or 0
 */
int main(void)
{
	int n;
	/*store the last digit*/
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*calcul the last digit*/
	m = n % 10;
	if (m > 5)
		/*last digit>5*/
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m < 6 && m != 0)
		/*last digit<6 and not 0*/
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		/*last digit is  0*/
		printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}
