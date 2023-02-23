#include "main.h"

/**
 * _isdigit - check from 1 to 9
 *
 * Description: Prints the numbers
 * @c: charater
 * Return: 1 if digit && 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
