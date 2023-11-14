#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints a character
 * @args: Argument list
 * @return: 0.
 */

int print_char(va_list args)
{
    char str = va_arg(args, int);

    if (str == '\0')
    {
        _putchar('\0');
        return (1);
    }
    _putchar(str);
    return (1);
}