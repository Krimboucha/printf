#include "main.h"

/**
 * _strlen - return length of string
 * @s: pointer to char
 *
 * Return: length number with null terminator
 */

int	_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

int	_putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - writes a string to stdout
 * @str: pointer to the string to be written
 *
 * Return: number of characters written
 */
int	_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * _putnbr - writes an integer to stdout
 * @n: integer to be written
 *
 * Return: count of characters written
 */
int	_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = +_putstr("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		count = +_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_putnbr(n / 10);
	}
	count = +_putchar((n % 10) + '0');
	return (count);
}
