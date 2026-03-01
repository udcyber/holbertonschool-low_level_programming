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

	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0)
		{
			if (n % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			if (n == 100)
				printf("Buzz\n");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", n);
	}
	return (0);
}
