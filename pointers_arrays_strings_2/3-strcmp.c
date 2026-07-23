#include "main.h"

/**
 * _strcmp - compare 2 strings lexicographically
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 *
 * Return: ASCII value of string
 */

int _strcmp(char *s1, char *s2)
{
	int limian, bijiao;

	limian = 0;

	while (s1[limian] == s2[limian] && s1[limian] != '\0')
	{
		limian++;
	}

	bijiao = s1[limian] - s2[limian];
	return (bijiao);
}
