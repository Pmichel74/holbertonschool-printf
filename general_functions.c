#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a single character to standard output.
 * @c: The character to be printed.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
* handler - Format controller
* @str: String format
* @list: List of arguments
*
* Return: Total size of arguments with the total size of the base string
**/
int handler(const char *str, va_list list)
{
	int size, i, aux;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			aux = percent_handler(str, list, &i);
			if (aux == -1)
				return (-1);

			size += aux;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}

/**
* percent_handler - Controller for percent format
* @str: String format
* @list: List of arguments
* @i: count
*
* Return: Size of the numbers of elements printed
**/
int percent_handler(const char *str, va_list list, int *i)
{
	int size, j, number_formats;

	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
/**
 * _strlen - Calculate the length of a string
 * @str: String
 *
 * Return: Length
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
