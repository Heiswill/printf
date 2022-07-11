#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printf_char - print character
 * @args: character argument
 * Return: number of characters
 */
int printf_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_s - prints string
 * @args: string arguments
 * Return: number of characters printed
 */
int printf_string(va_list args)
{
	int i, count = 0;
	char *str;
	
	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent string.
 * @args: string argument
 * Return: return the percent string
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
