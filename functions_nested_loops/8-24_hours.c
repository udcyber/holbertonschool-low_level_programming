#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
/* 《number / 10》gives the tens digit */
/* fi (7/10=0, 7%10=7, result 07) */
/* fi (23/10=2, 23%10=3, result 23) */
/* fi (45/10=4, 45%10=5, result 45) */
/* fi (59/10=5, 59%10=9, result 59) */
/* 《number % 10》gives the units digit */
	}
}
