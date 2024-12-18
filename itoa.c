#include "main.h"

/**
 * itoa - integer to ASCII
 * @num: num
 * @base: base
 *
 * Return: char
 **/
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

while (n != 0)
{
    *--ptr = array[n % base];
    n /= base;
}

	if (sign)
		*--ptr = sign;
	return (ptr);
}

