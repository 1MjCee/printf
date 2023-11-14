#include <limits.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_int - prints integer to standard output
 * @args: Argument list
 * @return: Length.
 */

int print_integer_d(va_list args)
{
    int len, char_len, i;
    long int reversedDigits[20];

    int num = va_arg(args, int);

    /* Handle the case of zero separately */
    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    len = 0;
    char_len = 0;

    /*Handling negative numbers*/
    if (num < 0)
    {
        _putchar('-');
        char_len++;
        num = -num;
    }


    /* Extract digits in reverse order */
    while (num > 0)
    {
        reversedDigits[len++] = num % 10;
        num /= 10;
    }

    /* Print digits in correct order */
    for (i = len - 1; i >= 0; --i)
    {
        _putchar(reversedDigits[i] + '0');
    }

    len += char_len;
    return (len);
}