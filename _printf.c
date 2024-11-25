#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - main function
 * @format: const char format
 * Return: Count of the charactere printed.
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0; int i = 0;
	va_start(args, format);
	while (*format)
	{
	if (*format == '%' && *(format + 1))
	{
	format++;
	if (*format == 'c')
	{
	char c = va_arg(args, int);
	count += write(1, &c, 1); }
	else if (*format == 's')
	{
	char *str = va_arg(args, char *);
	for (i = 0; str && str[i]; i++)
	count += write(1, &str[i], 1);
	if (!str)
	count += write(1, "(null)", 6);
	}
	else if (*format == '%')
	count += write(1, "%", 1);
	}
	else
	count += write(1, format, 1);
	format++;
	}
	va_end(args);
	return (count);
}