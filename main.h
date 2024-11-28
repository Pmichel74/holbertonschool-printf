#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct _format - Structure that associates a format type with a print function.
*
* @type: Format type ('c','d'...)
* @f: A pointer to a function that takes va_list as an argument & returns an int
**/
typedef struct _format
{
	char type;

	int (*f)(va_list);
} format;


int print(char *);
char *itoa(long int, int); /*  convert an integer to a string */


int _printf(const char *, ...);


int handler(const char *, va_list); /* Main overall chain structure and format specifiers */
int percent_handler(const char *, va_list, int *);/* handles only format specifiers (like %s, %d) */


int print_string(va_list); /* print string in a variadic function */
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);



int _putchar(char);

#endif
