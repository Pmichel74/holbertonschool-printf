#include "main.h"

/**
 * print_integer - Print a number
 * @list: Number to print
 *
 * Return: Length of th numbers in decimal
 **/
int print_integer(va_list list)
{
	char *integer;
	int size;

	integer = itoa(va_arg(list, int), 10); /* converts the integer to a string in a base 10 */

	if (integer != NULL)
	size = print(integer);
	else
	size = print("NULL");


	return (size);
}
