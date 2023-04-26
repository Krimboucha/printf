#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

/**
 * _printf - counts number of characters printed
 * @format: format string containing specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...);

/**
 * _printc - prints a character with %c specifier
 * @t: va_list containing the character to print
 *
 * Return: number of characters printed (1)
 */
int _printc(va_list t);

/**
 * _strlen - return length of string
 * @s: pointer to the string
 *
 * Return: length of the string without null terminator
 */
int _strlen(char *s);

/**
 * _putchar - writes a character to stdout
 * @c: character to be written
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c);

/**
 * _putstr - writes a string to stdout
 * @str: pointer to the string to be written
 *
 * Return: number of characters written
 */
int _putstr(char *str);

/**
 * _putnbr - writes an integer to stdout
 * @n: integer to be written
 *
 * Return: count of characters written
 */
int _putnbr(int n);

#endif
