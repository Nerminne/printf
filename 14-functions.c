#include "main.h"
/**
* rot13_conv - encoding given string using rot13'ed string
* @args: arguments
* Return: rot13 converted string
*/
int rot13_conv(va_list args)
{
	int src_i;
	char *source = va_arg(args, char *);
	char *conv;
	conv = malloc(sizeof(char) * ((int)strlen(source)));
	if (source == NULL || conv == NULL)
		return (-1);

	for (src_i = 0; source[src_i]; src_i++)
	{
		if ((source[src_i] >= 'a' && source[src_i] <= 'm') || (source[src_i] >= 'A' && source[src_i] <= 'M'))
			conv[src_i] = source[src_i] + 13;
		else if ((source[src_i] >= 'n' && source[src_i] <= 'z') || (source[src_i] >= 'N' && source[src_i] <= 'Z'))
			conv[src_i] = source[src_i] - 13;
		else
			conv[src_i] = source[src_i];
	}
	write(1, conv, ((int)strlen(conv)));
	free(conv);
	return (((int)strlen(source)));
}
