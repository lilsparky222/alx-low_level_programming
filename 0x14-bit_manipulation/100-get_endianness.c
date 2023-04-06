#include "main.h"

/**
 * get_endianness - check the endian status if gig or little
 *
 * Return: 1 if big endian,0 if little
 */
int get_endianness(void)
{
	int end = 1;
	char *addres = (char *)(&end);

	return (*addres);
}
