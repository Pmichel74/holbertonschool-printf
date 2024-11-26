#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utilss.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_unsigned(va_list);


/* _putchar.c */
int _putchar(char);
int buffer(char);

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

#endif
