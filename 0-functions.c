#include "main.h"
/**
 * print_char - function that print character
 * @args: list of arguments
 * Return: length of c
 */
int print_char(va_list args)
{
	char parameter = va_arg(args, int);

	write(1, &parameter, 1);
	return (1);
}
/**
 * print_string - function that print string
 * @args: list of arguments
 * Return: length of string
 */
int print_string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(null)";
	write(1, string, ((int)strlen(string)));
	return (((int)strlen(string)));
}
/**
 * print_mod - function used to print percentage
 * @args: arguments
 * Return: length of char
 */
int print_mod(__attribute__ ((unused))va_list args)
{
	write(1, "%", 1);
	return (1);
}
/**
 * special_case - function to print special case
 * @aftper: char after (%)
 * Return: length
 */
int special_case(const char aftper)
{
	write(1, "%", 1);
	write(1, &aftper, 1);
	return (2);
}
