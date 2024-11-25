#include "main.h"
#include <unistd.h>
#include <stdarg.h>

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
const char *str = format;
int count = 0;
char c;
char *s;

va_list args;
va_start(args, *format);

while (*str)
{
	if (*str == '%')
	{
		str++;
		if (*str == 'c')
		{
			c = (char)va_arg(args, int);

			write(1, &c, 1);
			count++;
		}
		else if (*str == 's')
		{
			s = va_arg(args, char*);
			while (*s)
			{
				write(1, s, 1);
				s++;
				count++;
			}
		}
		else if (*str == '%')
		{
			write(1, "%", 1);
			count++;
		}
		else
		{
			write(1, "%", 1);
			write(1, str, 1);
			count += 2;
		}
	}
	else
	{
		write(1, str, 1);
		count++;
	}
	str++;
	}
	va_end(args);
	return (count);
	}
