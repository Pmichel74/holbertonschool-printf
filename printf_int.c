#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* print_integer - Print a number in base 10
* @list: Number to print in base 10
*
* Return: Length of the numbers in decimal
**/
int print_integer(va_list list)
{
	int num = va_arg(list, int);

	char buffer[32];

	/*Déclarer et initialiser len avec snprintf*/
	int len = snprintf(buffer, sizeof(buffer), "%d", num);

	/*Utiliser write pour afficher le contenu du buffer*/
	write(1, buffer, len);

    return len;
}
