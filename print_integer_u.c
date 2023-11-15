#include <stdarg.h>
#include "main.h"

/**
 * print_unsigned_integer - handles unsigned integer for _printif,
 * @args: List of arguments to be printed,
 * Return: length of printed unsigned integers.
 */

int print_unsigned_integer(va_list args)
{
    int len, i;
    unsigned int reversedDigits[11];

    unsigned int value = va_arg(args, unsigned int);

    /* Handle a zero case */
    if (value == 0)
    {
        _putchar('0');
        return (1);
    }

    len = 0;

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