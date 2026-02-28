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

	fenzhong = 0;
	xiaoshi = 0;

	while (xiaoshi <= 23)
	{
		while (fenzhong <= 59)
		{
			if (xiaoshi < 10)
			{
				_putchar('0');
			}
			_putchar(xiaoshi);
			_putchar(':');
			if (fenzhong < 10)
			{
				_putchar('0');
			}
			_putchar(fenzhong);
			_putchar('\n');
			fenzhong++;
		}
		xiaoshi++;
		fenzhong = 0;
	}
}
