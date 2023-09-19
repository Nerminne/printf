#include "main.h"
/**
 * _printf - function that do the same as printf
 * @format: string that composed of zero or more directives
 * specifier - struct for special characters and functions
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int length = 0;
	va_list args;
	special specifier[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	va_start(args, format);
	if (format == NULL)
		return (-1);

	length = compare(format, specifier, args);

	va_end(args);
	return (length);
}
