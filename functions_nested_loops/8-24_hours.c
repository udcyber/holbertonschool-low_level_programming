#include "main.h"

/**
 * jack_bauer - entry point
 *
 * print a full day clock
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int fenzhong, xiaoshi;

	xiaoshi = 0;

	while (xiaoshi <= 23)
	{
		fenzhong = 0;
		while (fenzhong <= 59)
		{
			_putchar((xiaoshi / 10) + '0');
			_putchar((xiaoshi % 10) + '0');
			_putchar(':');
			_putchar((fenzhong / 10) + '0');
			_putchar((fenzhong % 10) + '0');
			_putchar('\n');
			fenzhong++;
		}
		xiaoshi++;
	}
}
