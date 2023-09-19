#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>

/*
 * file main.h contain definitions of new type struct
 * and prototype of all functions will be used
 */

/**
 * struct fml - structure for characters and functions
 * @s: character
 * @funct: functions
 */
typedef struct fml
{
	char s;
	int (*funct)(va_list);
} special;

int _printf(const char *format, ...);
int compare(const char *format, special specifier[], va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int special_case(const char aftper);

int print_int(va_list args);

int reverso(va_list args);
int rot13_conv(va_list args);
int print_binary(va_list args);
#endif
