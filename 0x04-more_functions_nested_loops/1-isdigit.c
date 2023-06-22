#include "main.h"
/**
 * _isdigit - check if the caracter is a digit
 * @c : the caracter to be checked
 * Return : 1 if is a digit, 0 otherwise
 **/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
