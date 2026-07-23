#include <stdio.h>

/**
 * main - prints 1 to 100
 * Fizz instead of number for multiples of three
 * Buzz instead of number for multiples of five
 * FizzBuzz instead of numbers which are multiples of both three and five
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
