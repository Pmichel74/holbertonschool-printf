#include "main.h"
/**
 * print_char - print char.
 * @list: va_list.
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int value;

	value = va_arg(list, int); /* Retrieve the next argument as an int*/

	_putchar(value);

	return (1);
}
