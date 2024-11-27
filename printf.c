#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: character string. The format string
 * is composed of zero
 *
 * Return: The total number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	size = handler(format, args); /* the total number of characters printed */

	va_end(args);

	return (size);
}
