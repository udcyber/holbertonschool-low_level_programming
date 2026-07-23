#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: string to operate on
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int shu, i;

	shu = 0;

	while (shu >= 0)
	{
		if (str[shu] == '\0')
		{
			break;
		}
		shu++;
	}

	if (shu % 2 == 1)
	{
		i = shu / 2;
	}

	else
	{
		i = (shu - 1) / 2;
	}

	for (i++; i < shu; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
