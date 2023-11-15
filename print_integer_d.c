#include <stdarg.h>
#include "main.h"

/**
 * print_int - prints integer to standard output
 * @args: Argument list
 * Return: Length.
 */

int print_integer_d(va_list args)
{
    int len, i;
    long int reversedDigits[15];

    int num = va_arg(args, int);

    /* Handle the case of zero separately */
    if (num == 0)
    {
        _putchar('0');
        return (1);
    }

    len = 0;

    /*Handling negative numbers*/
    if (num < 0)
    {
        _putchar('-');
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

    len = len + 1;
    return (len);
}





