#include <stdio.h>

/**
 * main - main entry for block
 *
 * Return alway 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}

