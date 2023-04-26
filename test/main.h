#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

/** _printf - counts number of characters printed
 * @format: pointer to char
 *
 * Return: int
 */

int _printf(const char *format, ...);

/**
 * _printc - prints %c
 * @l: va_list
 *
 * Return: int
 */
int _printc(va_list t);

/**
 * _puststr - prints %s
 * @l: va_list
 *
 * Return: int
 */

int _putstr(char *str);

/**
 * _putchar - prints %i
 * @l: va_list
 *
 * Return: int
 */

int _putchar(char c);

/**
 * strlen - length of string
 * @l: string
 *
 * Return: int
 */

int _strlen(char *s);

#endif
