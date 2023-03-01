#include "main.h"
/**
 * _strncat -concatenates n bytes from a string to another
 * @dest: desination string
 * @src: source string
 * @n: number of byte of str concatenate
 *
 * Return: a pointer of the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
