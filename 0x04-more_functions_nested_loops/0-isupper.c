#include "main.h"

/**
 *_isupper - check for uppercase character
 *@c : a carater to be checked
 *Return: 1 if c is uppercase, 0 otherwise
 **/
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
