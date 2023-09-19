#include "main.h"

/**
 * compare - function used to type of directive if found
 * @format: format string
 * @specifier: array of directives and functions
 * @args: arguments
 * Return: length
 */
int compare(const char *format, special specifier[], va_list args)
{
	int j, length = 0, i, func_len = 0;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			for (j = 0; j < 7; j++)
			{
				while (format[i] == ' ')
				{
					if (format[i] != '\0')
						i++;
					else
						return (-1);
				}
				if (specifier[j].s == format[i])
				{
					func_len = specifier[j].funct(args);
					if (func_len == -1)
						return (-1);
					length += func_len;
					break; } }
			if (specifier[j].s == '\0' && format[i] != '\0')
				length += special_case(format[i]);
		}
		else
		{
			write(1, &format[i], 1);
			length++; }
	}
	return (length);
}
