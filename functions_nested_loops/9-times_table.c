#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
/** ALSO WORKS! */
/** */
/** */
/** */
void times_table(void)
{
	int num1, num2, equals;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');	
		_putchar(',');
		for (num2 = 1; num2 <= 9; num2++)
		{

			equals = num1 * num2;
			
			_putchar(' ');

			if (equals > 9)
			{
				_putchar((equals / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((equals % 10) + '0');

			if (num2 != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}