#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *@n: number of spaces
 * Return: void
 */
void print_diagonal(int n)
{
int rows, lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= n; rows++)
		{
			if (rows > 1)
			{
				for (lines = 1; lines <= rows - 1; lines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
