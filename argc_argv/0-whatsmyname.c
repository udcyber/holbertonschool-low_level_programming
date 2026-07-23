#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print name
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
