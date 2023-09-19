#include "main.h"
/**
 * print_int - function that print integer
 * @args: argument
 * Return: length of int
 */
int print_int(va_list args)
{
	int num = va_arg(args, int);
	unsigned int tens, n;
	char oper;
	int len = 0;

	if (num < 0)
	{
		n = num * -1;
		write(1, "-", 1);
		len++;
	}
	else
		n = num;
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	for (tens = 1; (n / tens) > 9; )
		tens *= 10;
	for ( ; tens >= 1; tens /= 10)
	{
		oper = ((n / tens) + '0');
		write(1, &oper, 1);
		len++;
		n %= tens;
	}
	return (len);
}
