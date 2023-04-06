#include "main.h"

/**
 * print_binary -function to print binary represeantation of a number
 * @n: number to be printed
 *
 */

void print_binary(unsigned long int n)
{
	int binaryp = ((n & 1) + '0');

	if (n > 1)
	{
		print_binary((n >> 1));
	}
	_putchar(binaryp);
}
