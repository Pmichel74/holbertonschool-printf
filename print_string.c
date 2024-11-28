#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char*);/* Retrieve the next argument as a char*/

	if (p!= NULL)
	p_len = print (p);
	else
	p_len = print("NULL");

	return (p_len);
}
