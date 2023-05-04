#include "main.h"

/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: points to a number
 * @index: index of the bit you want to get
 *
 * Return: 1 if it successful or -1 if an error ocurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
