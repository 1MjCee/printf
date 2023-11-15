#include <limits.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - Converts unsigned integer to binary, the prints it.
 * @args: Argument list
 * Return: Length.
 */

int print_binary(va_list args)
{
    int len, i;
    unsigned int reversedBits[32];

    unsigned int value = va_arg(args, unsigned int);

    /* Handle zero case */
    if (value == 0)
    {
        _putchar('0');
        return 1;
    }

    len = 0;

    /* Extract bits in reverse order */
    while (value > 0)
    {
        reversedBits[len++] = value % 2;
        value /= 2;
    }

    /* Print bits in correct order */
    for (i = len - 1; i >= 0; --i)
    {
        _putchar(reversedBits[i] + '0');
    }

    return (len);
}