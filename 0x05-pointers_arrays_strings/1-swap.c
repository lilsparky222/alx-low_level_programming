#include "main.h"
/**
 * swap_int - swaps two integer values
 * @a: int 1
 * @b: int 2
 *
 **/
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
