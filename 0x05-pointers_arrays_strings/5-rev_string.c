#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, lent, len;

	lent = 0;
	len = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}

	len = lent - 1;

	for (i = 0; i < lent / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
