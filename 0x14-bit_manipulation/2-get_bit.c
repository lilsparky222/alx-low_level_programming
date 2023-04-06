#include "main.h"

/**
 * get_bit - Returns the index value
 * @n: Number for binary
 * @index: The indexnumber
 * Return: value of  index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (mask = 0; mask < index; mask++)
		n = n >> 1;
	return ((n & 1));
}
