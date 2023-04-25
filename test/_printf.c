#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/** _printf - counts number of characters printed
 * @format: pointer to char
 *
 * Return: int
 */

int _printf(const char *format, ...)
{
	int count, i, j;
	va_list args;
	va_start(args, format);

	count = 0;
	i = 0;
	j = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = (char) va_arg(args, int);
				_printc(args);
				count++;
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char *);
				while (str[j])
				{
					write(1, &str[j], 1);
					count++;
					j++;
				}
			}
			else if (format[i] == '%')
			{
				write(1, &format[i], 1);
				count++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

/**
 * _printc - prints %c
 * @l: va_list
 *
 * Return: int
 */

int _printc(va_list t)
{
	int c = va_arg(t, int);

	write(1, &c, 1);
	return (1);
}
