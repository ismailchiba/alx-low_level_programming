#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @c : number
 * Return: the last digit
 **/
int print_last_digit(int c)
{
	int ldigt;

	ldigt =  c % 10;
	if (ldigt < 0)
		ldigt = ldigt * -1;
	_putchar('0' + ldigt);
	return (ldigt);
}
