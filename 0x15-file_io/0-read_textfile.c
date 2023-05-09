#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t o, r, w;
	char *allay;

	if (filename == NULL)
		return (0);

	allay = malloc(sizeof(char) * letters);
	if (allay ==  NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, allay, letters);
	w = write(STDOUT_FILENO, allay, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(allay);
		return (0);
	}

	free(allay);
	close(o);

	return (w);

}

