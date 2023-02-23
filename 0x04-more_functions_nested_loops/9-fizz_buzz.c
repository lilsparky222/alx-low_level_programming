#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints FizzBuzz
 *
 * Return: void
 */
int main(void)
{
int word;

	for (word = 1; word <= 100; word++)
	{
		if ((word % 3 == 0) && (word % 5 == 0))
			printf("FizzBuzz");
		else if (word % 5 == 0)
			printf("Buzz");
		else if (word % 3 == 0)
			printf("Fizz");
		else
			printf("%i", word);

		if (word < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
