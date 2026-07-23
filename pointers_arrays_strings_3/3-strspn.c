#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: scan this string
 * @accept: want this part of string
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int da, zhong, xiao, zainar;

	xiao = 0;

	for (da = 0; s[da] != '\0'; da++)
	{
		zainar = 0;
		for (zhong = 0; accept[zhong] != '\0'; zhong++)
		{
			if (s[da] == accept[zhong])
			{
				xiao++;
				zainar = 1;
			}
		}
		if (zainar == 0)
		{
			return (xiao);
		}
	}
	return (0);
}
