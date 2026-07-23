#include "main.h"

/**
 * _atoi - convert string to integer
 * number in string can be preceded by infinite number of char
 * take into account all - and + signes before the number
 * if no numbers in string, function must return to 0
 * @s: string to change
 *
 * Return: result of conversion
 */

int _atoi(char *s)
{
	short einoder;
	int zhao, bianxiao, jieguo;

	zhao = bianxiao = jieguo = einoder = 0;
	bianxiao = -1;

	while (s[zhao] != '\0')
	{
		if (s[zhao] == '-')
		{
			bianxiao *= -1;
		}
		if (s[zhao] >= '0' && s[zhao] <= '9')
		{
			jieguo *= 10;
			jieguo -= (s[zhao] - '0');
			einoder = 1;
		}
		else if (einoder == 1)
		{
			break;
		}
		zhao++;
	}
	jieguo *= bianxiao;
	return (jieguo);
}
