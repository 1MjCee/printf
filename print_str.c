#include <stdarg.h>
#include "main.h"

/**
 * print_str - handles a string
 * @args: argument list,
 * Return: length of the string.
 */

int print_str(va_list args)
{
	int len, i;
	char *string;

	string = va_arg(args, char *);

	if (string == NULL)
	{
		return (0);
	}
	len = _strlen(string);

	for (i = 0; i <= len - 1; ++i)
	{
		_putchar(string[i]);
	}
	return (len);
}

