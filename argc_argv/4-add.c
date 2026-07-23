#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argv: argv
 * @argc: argc
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x, y, jia;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		jia = jia + atoi(argv[x]);
	}
	printf("%i\n", jia);
	return (0);
}
