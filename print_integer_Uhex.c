#include <stdarg.h>
#include "main.h"

/**
 * print_hexadecimal_upper - handles hexadecimal upper letters for _printf,
 * @args: list of arguments to be printed,
 * @return: Length of hexadecimal upper case letters printed.
 */

int print_hexadecimal_upper(va_list args)
{
    int len, i; = 0;
    unsigned int hexDigits[8];

    unsigned int value = va_arg(args, unsigned int);

    /* Handle the case of zero */
    if (value == 0) {
        _putchar('0');
        return (1);
    }

    len = 0;

    /* Extract uppercase hexadecimal numbers in reverse order */
    while (value > 0) {
        hexDigits[len++] = value % 16;
        value /= 16;
    }

    /* Print uppercase hexadecimal digits in correct order */
    for (int i = len - 1; i >= 0; --i)
    {
        if (hexDigits[i] < 10)
        {
            _putchar(hexDigits[i] + '0');
        }
        else
        {
            _putchar(hexDigits[i] - 10 + 'A');
        }
    }

    return (len);
}