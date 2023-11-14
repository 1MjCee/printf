#include <stdarg.h>
#include "main.h"

/**
 * print_octal_integer - handles octal integers for _printf,
 * @args: list of arguments to be printed,
 * @return: Length of octal integer printed.
 */

int print_octal_integer(va_list args)
{
    int len, i;
    unsigned int octalDigits[11];

    unsigned int value = va_arg(args, unsigned int);

    /* Handle the case of zero separately */
    if (value == 0)
    {
        _putchar('0');
        return (1);
    }

    /* initializing len to 0 */
    len = 0;

    /* Extracting digits in reverse order */
    while (value > 0)
    {
        octalDigits[len++] = value % 8;
        value /= 8;
    }

    /* Print digits in correct order */
    for (int i = len - 1; i >= 0; --i)
    {
        _putchar(octalDigits[i] + '0');
    }

    return (len);
}
