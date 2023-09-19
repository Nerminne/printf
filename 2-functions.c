#include "main.h"
/**
 * print_binary - function that convert int to binary
 * @args: arguments
 * Return: string contain binary
 */
int print_binary(va_list args)
{
	int num = va_arg(args, int);
	int middle = 0;
	int x;
	char *binary;
	char temp;
	int i = 0;

	if  (num < 0)
		binary[i] = '1';
	else
		binary[i] = '0';
	i++;
	num *= num;
	while (num != 0)
	{
		if ((num % 2) == 0)
			binary[i] = '0';
		else
			binary[i] = '1';
		num /= 2;
		i++;
	}
	middle = i / 2;
	for (x = 0; x < middle; x++)
	{
		temp = binary[x];
		binary[x] = binary[i - x - 1];
		binary[i - x - 1] = temp;
	}
	write(1, binary, i - 1);
	return(i - 1);
}
