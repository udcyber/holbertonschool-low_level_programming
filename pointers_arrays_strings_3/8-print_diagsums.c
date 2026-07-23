#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of 2 diagonals of square matrix of integers
 * @a: square matrix
 * @size: of matrix
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int shu;

	unsigned int jia1, jia2;

	jia1 = 0;
	jia2 = 0;

	for (shu = 0; shu < size; shu++)
	{
		jia1 += a[(size * shu) + shu];
		jia2 += a[(size * (shu + 1)) - (shu + 1)];
	}
	printf("%d, %d\n", jia1, jia2);
}
