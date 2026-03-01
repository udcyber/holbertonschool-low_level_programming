#include <stdio.h>

/**
 * main - entry point
 * print numbers from one to a hundred
 * followed by a new line
 * for multiples of three
 * print Fizz instead of the number
 * for the multiples of five
 * print Buzz
 * for numbers which are multiples of both
 * three and five
 * print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3)
		{
			printf("Fizz ");
		}
		else if (n % 5)
		{
			printf("Buzz ");
		}
		else if (n % 3 && n % 5)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
	printf("\n");
	}
	return (0);
}
