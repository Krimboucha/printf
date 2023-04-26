#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/** _printf - counts number of characters printed
 * @format: pointer to char
 *
 * Return: int
 */

int	_printf(const char *format, ...)
{
	va_list	args;
	char	c;
	char	*str;
	int count;
	int i;

	va_start(args, format);
	str = NULL;
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				count += _putchar(c);
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					count += _putstr("(null)");
				else
					count += _putstr(str);
			}
			else if (format[i] == 'd' || format[i] == 'i')
				count += _putnbr(va_arg(args, int));
			else if (format[i] == '%')
				count += _putchar('%');
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
