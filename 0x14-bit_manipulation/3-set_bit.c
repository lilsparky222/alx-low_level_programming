#include "main.h"

/**
 * set_bit - the set value of a bit to 1 at a given index.
 * @n: Pointer to a number;
 * @index: index to get number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}

