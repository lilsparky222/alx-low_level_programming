#include "main.h"

/**
 * flip_bits - returns numbers needed to flip to get
 * from one number to another
 * @n: the first value
 * @m: the second value
 *
 * Return: number to get
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int mash = (sizeof(n) * 8);
	int push = 0;

	while (mash--)
		push += (n >> mash & 1) != (m >> mash & 1);
	return (push);
}

