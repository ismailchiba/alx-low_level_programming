#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c : the character to be checked
 *
 * Return: 1 if alphabet 0 otherwise
 *
 **/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
