#include "main.h"
/**
 *  * _islower - checks for lowercase
 *   * @c:  code ASCII character to be checked
 *    * Return: 1 if c lowercase 0 otherwise
 *     **/
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
