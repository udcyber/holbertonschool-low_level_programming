#include "main.h"

/**
 * leet - encodes a string into 1337
 * a & A replace by 4
 * e & E replace by 3
 * o & O replaced by 0
 * t & T replace by 7
 * l & L replaced by 1
 *@x: pointer to string
 *
 * Return: pointer to x
 */

char *leet(char *x)
{
	int strshu, leetshu;
	char leetzi[] = "aAeEoOtTlL";
	char leetnum[] = "4433007711";

	strshu = 0;
	while (x[strshu] != '\0')
	{
		leetshu = 0;
		while (leetshu < 10)
		{
			if (leetzi[leetshu] == x[strshu])
			{
				x[strshu] = leetnum[leetshu];
			}
			leetshu++;
		}
		strshu++;
	}
	return (x);
}
