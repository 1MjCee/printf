#include <limits.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_int - prints integer to standard output
 * @args: Argument list
 * @return: Length.
 */

int print_integ(va_list args)
{
    int num = va_arg(args, int);
    int temp, i, len = 0;
    int digits[10];
    char *error;

    /* Handle negative numbers */
    if (num < 0)
    {
        /* Check for overflow */
        if (num == INT_MIN)
        {
            error = "Error: integer overflow\n";
            i = 0;
            while (error[i] != '\0')
            {
                _putchar(error[i]);
                i++;
            }
            return (-1);
        }
    _putchar('-');
    num = -num;
    len++;
    }
    else if (num == 0)
    {
        _putchar('0');
        len++;
        return (1);
    }

    /* Count the number of digits in the integer */
    temp = num;
    do
    {
        temp /= 10;
        len++;
    } while (temp != 0);

    /* Store each digit in an array in reverse order */
    temp = num;
    i = 0;

    do
    {
    digits[i++] = temp % 10;
    temp /= 10;
    } while (temp != 0);

    /* Print each digit in the correct order */
    for (i = len - 1; i >= 0; i--)
    {
        if (digits[i] == 0)
        {
            continue;
        }
        else
        {
            _putchar(digits[i] + '0');
        }
    }
    return (len);
}