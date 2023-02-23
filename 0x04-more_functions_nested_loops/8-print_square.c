#include "main.h"

/**
 * print_square - entry point
 *
 * Description: Prints square
 *@size: size of square
 * Return: void
 */
void print_square(int size)
{
int rows, columns;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (columns = 1; columns <= size; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
