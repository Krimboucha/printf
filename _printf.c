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
				write(1, &c, 1);
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
				j = 0;
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
 * _strlen - return length of string
 * @s: pointer to char
 *
 * Return: length number with null terminator
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
