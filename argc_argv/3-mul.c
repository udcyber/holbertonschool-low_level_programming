#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x = 0, y = 0;

	if (argc > 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
