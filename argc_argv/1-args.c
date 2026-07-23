#include "main.h"
#include <stdio.h>

/**
 * main - print number of args passed into it
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
