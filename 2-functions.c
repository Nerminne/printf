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
	char *binary = malloc(sizeof(char) * (33 + 1));
	char temp;
	int i = 0;

	if (binary == NULL)
	{
		return -1;
	}

	if (num < 0) {
	binary[i] = '1';
	}
	else
	{
	binary[i] = '0';
	}
	i++;
	num *= num;

	while (num != 0) {
		if ((num % 2) == 0) {
			binary[i] = '0';
		}
		else
		{
			binary[i] = '1';
		}
		num /= 2;
		i++;
	}
	middle = i / 2;
	for (x = 0; x < middle; x++) {
		temp = binary[x];
		binary[x] = binary[i - x - 1];
		binary[i - x - 1] = temp;
	}
	binary[i] = '\0';
	write(1, binary, i);
	free(binary);

    return (i);
}
