<<<<<<< HEAD
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
=======
#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints a character
 * @args: Argument list
 * @return: 0.
 */

int print_char(va_list args)
{
    char character;
    character = va_arg(args, int);

    if (character == '\0')
    {
        _putchar('\0');
        return (1);
    }
    _putchar(character);
    return (1);
}
>>>>>>> 086bd2450d319deb74a1dea2034aaaff489a622f
