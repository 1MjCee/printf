<<<<<<< HEAD
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
=======
#include <stdarg.h>
#include "main.h"

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
>>>>>>> 086bd2450d319deb74a1dea2034aaaff489a622f
