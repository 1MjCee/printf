#include <stdarg.h>
#include "main.h"

/**
 * print_hexadecimal_integer - handles hexadecimal integers for _printf,
 * @args: list of arguments to be printed,
 * Return: Length of hexadecimal integer printed.
 */

int print_hexadecimal_integer(va_list args)
{
    int i, len;
    unsigned int hexDigits[8];

    unsigned int value = va_arg(args, unsigned int);

    /* Handle the case of zero separately */
    if (value == 0)
    {
        _putchar('0');
        return (1);
    }

    /* Initialize len as zero */
    len = 0;

    /* Extract hexadecimal digits in reverse order */
    while (value > 0)
    {
        hexDigits[len++] = value % 16;
        value /= 16;
    }

    /* Print hexadecimal digits in correct order */
    for (i = len - 1; i >= 0; --i)
    {
        if (hexDigits[i] < 10)
        {
            _putchar(hexDigits[i] + '0');
        } else
        {
            _putchar(hexDigits[i] - 10 + 'a');
        }
    }

    return (len);
}