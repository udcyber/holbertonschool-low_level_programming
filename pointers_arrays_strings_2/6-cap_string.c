#include "main.h"

/**
 * cap_string - Camel Case all words of a string
 * separators of words: space, tabulation, new line
 * ,;.!?""(){}
 * @x: string passed to function
 *
 * Return: string with Camel Case
 */

char *cap_string(char *x)
{
	int i = 0, j = 11;

	char a[] = {'.', ',', ';', ' ', '!', 9, 10, '?', '"', '(', ')', '{', '}'};

	if (*(x + i) >= 97 && *(x + i) <= 122)
	{
		*(x + i) = *(x + i) - 32;
	}
	while (*(x + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((a[j] == *(x + i)) && (*(x + i + 1) >= 97) && (*(x + i + 1) <= 122))
			{
				*(x + i + 1) = *(x + i + 1) - 32;
			}
		}
		i++;
	}
	return (x);
}
