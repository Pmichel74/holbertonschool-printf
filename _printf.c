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
int count = 0, i = 0;
char c;
char *s;

va_list args;
va_start(args, format);

while (format[count])
{
	if (format[count] == '%')
	{

		if (format[count] == 'c')
		{
			c = (char)va_arg(args, int);

			write(1, &c, 1);
		}
		else if (format[count] == 's')
		{
			s = va_arg(args, char*);
			while (*s)
			{
				write(1, s, 1);
				s++;
				i++;
			}
		}
		else if (format[count] == '%')
		{
			write(1, "%", 1);
		}
		else
		{
			write(1, "%", 1);
			write(1, format, 1);
		}
	}
	else
	{
		_putchar(format[count]);
	}
	count++;
}
	va_end(args);
	count += i;
	return (count);
	}