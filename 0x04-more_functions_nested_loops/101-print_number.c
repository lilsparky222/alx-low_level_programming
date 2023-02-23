#include "main.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
int i, j, digit_1, digit_2, power;
unsigned int temp, numchar, number;

	digit_1 = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit_1++;
	}
	digit_2 = digit_1 + 1;
	power = 1;
	i = 1;

	while (i < digit_2)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}
