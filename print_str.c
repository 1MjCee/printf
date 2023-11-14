#include <stdarg.h>
#include "main.h"

/**
 * print_str - prints a string
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_str(va_list args)
{
	char *string;
	int i;
	int len;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = "(NULL)";
		len = _strlen(string);
		for (i = 0; i < len; i++)
			_putchar(string[i]);
		return (len);
	}
	len = _strlen(string);
	for (i = 0; i < len; ++i)
		_putchar(string[i]);
	return (len);
}
