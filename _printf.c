#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - A simple implementation of a formatted output function.
 * @format: A string that specifies how subsequent arguments (after the format)
 * are converted for output. It can contain regular characters to be
 * printed as-is, and format specifiers starting with '%' to format
 * the output. Supported specifiers include:
 * - 'c': for printing a character.
 * - 's': for printing a string.
 * - '%': for printing a literal percent sign.
 *
 * Return: The total number of characters printed,
 * or a negative value on error.
 *
 */
int _printf(const char *format, ...)
{
int count = 0, j = 0;
int (*f)(va_list);
va_list args;

va_start(args, format);
if (format == NULL || !format[count + 1])
		return (-1);
while (format[count])
{
	if (format[count] == '%')
	{
		if (format[count + 1])
			{
				if (format[count + 1] != 'c' && format[count + 1] != 's'
				&& format[count + 1] != '%' && format[count + 1] != 'd'
				&& format[count + 1] != 'i')
				{
					j += _putchar(format[count]);
					j += _putchar(format[count + 1]);
					count++;
				}
				else
				{
					f = get_func(&format[count + 1]);
					j += f(args);
					count++;
				}
			}
	}
	else
	{
		putchar(format[count]);
			j++;
		}
		count++;
	}
	va_end(args);
	return (j);
}
