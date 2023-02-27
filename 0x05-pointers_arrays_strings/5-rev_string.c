#include "main.h"
/**
 * rev_string - reverses a string
 * @s: holi
 *
 */
void rev_string(char *s)
{
	int i;
	int y;
	int temp;
	int length;

	while (s[i] != 0)
	{
		i++;
	}

	length = i;
	i = 0;
	y = length - 1;

	while (i < y)
	{
		temp = s[i];
		s[i] = s[y];
		s[y] = temp;
		i++;
		y--;
	}
}
