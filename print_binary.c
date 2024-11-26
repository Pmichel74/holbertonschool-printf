#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list list)
{
	char *value;
	int size;

	value = itoa(va_arg(list, unsigned int), 2); /* converts the unsigned integer into a string representation in binary base 2*/

	size = print(value);

	return (size);
}
