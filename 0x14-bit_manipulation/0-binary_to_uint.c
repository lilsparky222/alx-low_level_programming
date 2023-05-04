#include <math.h>
#include <string.h>


/**
 * binary_to_uint - converts binary to an unsigned integer
 * @b: pointer to the character array in binary to be converted
 *
 * Return: the converted number if successful, 0 otherwise
 */


unsigned int binary_to_uint(const char *b)
{
	int x, baze = 1, lenght = 0;
	unsigned int result = 0;


	if (!b)
		return (0);


	lenght = strlen(b);


	for (x = lenght - 1; x >= 0; x--)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		if (b[x] == '1')
			result += baze;
		baze *= 2;
	}
	return (result);
}

