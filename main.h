#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct _format - Typedef struct
*
* @type: Format
* @f: The function associated
**/
typedef struct _format
{
	char type;

	int (*f)(va_list);
} format;


int _strlen(const char *); /* get the length of the format string */
int print(char *);
char *itoa(long int, int); /*  convert an integer to a string */


int _printf(const char *, ...);


int handler(const char *, va_list); /* Returns the total number of characters printed */
int percent_handler(const char *, va_list, int *);


int print_string(va_list); /* print string in a variadic function */
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);



int _putchar(char);
int buffer(char);

#endif
