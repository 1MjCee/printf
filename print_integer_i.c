#include <limits.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_int_i - Handles %i specifier
 * @args: Argument list
 * Return: Length.
 */

int print_integer_i(va_list args)
{
    int len, i, value;
    int reversedDigits[11];

    value = va_arg(args, int);

    /* Handle zero case */
    if (value == 0)
    {
        _putchar('0');
        return (1);
    }

    /* Handle negative numbers */
    if (value < 0)
    {
        _putchar('-');
        value = -value;
        len = 1;
    }
    else
    {
        len = 0;
    }

    /* Extract digits in reverse order */
    while (value > 0)
    {
        reversedDigits[len++] = value % 10;
        value /= 10;
    }

    /* Print digits in correct order */
    for (i = len - 1; i >= 0; --i)
    {
        _putchar(reversedDigits[i] + '0');
    }

    return (len);
}

