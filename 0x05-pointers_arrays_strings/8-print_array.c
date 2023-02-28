#include "main.h"
#include <stdio.h>
/**
 * print_array - print n times of an array element
 * @a: the pointer to element
 * @n:times to print element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
