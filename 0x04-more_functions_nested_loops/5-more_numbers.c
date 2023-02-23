#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Printing numbers 1-10 with _putchar
 *
 * Return: void
 */
void more_numbers(void)
{
int num, tams, unit, num_2;

	for (num_2 = 1; num_2 <= 10; num_2++)
	{
		for (num = 0; num <= 14; num++)
		{
			tams = num / 10;
			unit = num % 10;
			if (num > 9)
				_putchar(tams + '0');

			_putchar(unit + '0');
		}
		_putchar('\n');
	}
}
