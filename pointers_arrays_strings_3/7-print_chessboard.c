#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: lines
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int heng, shu;

	for (heng = 0; heng < 8; heng++)
	{
		for (shu = 0; shu < 8; shu++)
		{
			_putchar(a[heng][shu]);
		}
		_putchar('\n');
	}
}
