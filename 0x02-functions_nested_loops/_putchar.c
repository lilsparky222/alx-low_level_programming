#include <unistd.h>

/**
 * putcahr - writes the character c to stdout
 * @c to print character
 * Return : on successful 1
 * error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

