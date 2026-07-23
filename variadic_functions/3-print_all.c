#include "variadic_functions.h"
#include <stdio.h>

/**
 * _printchar - print character
 * @list: list
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}



/**
 * _printstr - print string
 * @list: list
 */
void _printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == 0)
	{
		s = "(nil)";
	}
	printf("%s", s);
}



/**
 * _printfloat - print float
 * @list: list
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}


/**
 * _printint - print integer
 * @list: list
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}



/**
 * print_all - print anything
 * @format: const char argument
 */
void print_all(const char * const format, ...)
{
	unsigned int x = 0, y = 0;
	va_list list;
	char *str = "";

	Check_format fmt[] = {
	{"c", _printchar},
	{"f", _printfloat},
	{"s", _printstr},
	{"i", _printint},
	};

	va_start(list, format);
	while (format != 0 && format[x / 4] != 0)
	{
		y = x % 4;
		if (fmt[y].type[0] == format[x / 4])
		{
			printf("%s", str);
			fmt[y].f(list);
			str = ", ";
		}
		x++;
	}
	printf("\n");
	va_end(list);
}
