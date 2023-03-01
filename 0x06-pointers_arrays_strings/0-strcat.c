#include "main.h"

/**
 * _strcat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
