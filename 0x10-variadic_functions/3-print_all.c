#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;

	va_list list;
	va_start(list, format);
	if (format)
	{
	while (format [i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			i++;
	}
	}
	}
	printf("\n");
	va_end(list);
}
