#include <limits.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_int_i - Handles %i specifier
 * @args: Argument list
 * @return: Length.
 */

int print_integer_i(va_list args)
{
    int len, digits, i;
    int reversedDigits[11];

    int num = va_arg(args, int);

    /* Handle the case of zero */
    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    /* initialize len and num of digits to zero*/
    len = 0;
    digits = 0;

    /* Handle negative numbers */
    if (num < 0)
    {
        _putchar('-');
        len = 1;
        num = -num;
    }

    /* Extract digits in reverse order */
    while (num > 0)
    {
        reversedDigits[digits++] = num % 10;
        num /= 10;
    }

    /* Print digits in correct order */
    for (i = digits - 1; i >= 0; --i)
    {
        _putchar(reversedDigits[i] + '0');
    }

    len = len + digits;
    return (len);
}

