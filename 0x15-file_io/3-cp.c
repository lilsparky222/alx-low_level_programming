#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - copies the content of a file to another file
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int op, wr, r, w;
	char allay[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	wr = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (wr == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	while ((r = read(op, allay, 1024)) != 0)
	{
		if (r == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		w = write(wr, allay, r);
		if (w == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	if (close(op) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op), exit(100);
	}

	if (close(wr) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wr), exit(100);
	}
	return (0);
}

