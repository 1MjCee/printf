#include "main.h"
#include <stdarg.h>

/**
 * print_non_printable_string - Prints a string with special handling for non-printable ASCII characters.
 * @args: va_list containing the string to be printed.
 *
 * Return: The total length of the printed string.
 */
int print_ascii_char(va_list args)
{
    char *s;
    int i, len;
    int value;

    s = va_arg(args, char *);
    len = 0;

    if (s == NULL)
        return (0);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] < 32 || s[i] >= 127)
        {
            _putchar('\\');
            _putchar('x');
            len += 2;

            value = s[i];
            if (value < 16)
            {
                _putchar('0');
                len++;
            }

            len += print_value_hex(value);
        }
        else
        {
            _putchar(s[i]);
            len++;
        }
    }

    return (len);
}

/**
 * print_value_hex - Prints the hexadecimal representation of a value.
 * @value: The value to be printed in hexadecimal.
 *
 * Return: The number of characters printed.
 */
int print_value_hex(int value)
{
    int count;
    int rem;

    count = 0;
    if (value == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        while (value != 0)
        {
            rem = value % 16;
            if (rem < 10)
                _putchar('0' + rem);
            else
                _putchar('a' + rem - 10);

            count++;
            value /= 16;
        }
    }

    return count;
}