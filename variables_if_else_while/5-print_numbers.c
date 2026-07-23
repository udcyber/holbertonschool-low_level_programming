#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
/* */
/* */
/* */
/* */
/*《OTHER WAY》*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
