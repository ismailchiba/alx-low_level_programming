#include "main.h"
/**
 * _islower() - checks for lowercase
 *
 * parameter: c integer code ASCII
 * Return: 1 if c lowercase 0 otherwise
 *
 * 
 */
int _islower(int c)
{
	if ( c > 96 && c < 123)
		return (1);
	else
		return (0);
}
