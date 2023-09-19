#include "main.h"
/**
 * reverso - function that reverse string
 * @args: argument
 * Return: reversed string length
 */
int reverso(va_list args)
{
	char *stringo = va_arg(args, char *);
	int y = 0, x = 0;
	char *reversedo;

	x = (int)strlen(stringo);
	reversedo = malloc(sizeof(char) * x);
	if (stringo == NULL || reversedo == NULL)
		return (-1);
	x = (int)strlen(stringo);
	x--;
	while (x >= 0)
	{
		reversedo[y] = stringo[x];
		x--;
		y++;
	}
	write(1, reversedo, y);
	free(reversedo);
	return (y);
}
