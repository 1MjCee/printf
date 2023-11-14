#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints a character
 * @args: Argument list
 * Return: 0.
 */
int print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (0);
}
