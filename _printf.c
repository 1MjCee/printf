#include "main.h"
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count;

    va_start(args, format);
    count = 0;

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;

            /*handle conversion specifiers*/
            switch (*format)
            {
                case 'c':
                    count += print_char(args);
                    break;
                case 's':
                    count += print_str(args);
                    break;
                case '%':
                    count += print_percent(args);
                    break;
                case 'd':
                    count += print_integer_d(args);
                    break;
                case 'i':
                    count += print_integer_i(args);
                    break;
                case 'u':
                    count += print_unsigned_integer(args);
                    break;
                case 'o':
                    count += print_octal_integer(args);
                    break;
                case 'x':
                    count += print_hexadecimal_integer(args);
                    break;
                case 'X':
                    count += print_hexadecimal_upper(args);
                    break;
                default:
                    /* unsupported specifier, just print the character */
                    count += _putchar('%');
                    count += _putchar(*format);
            }
        } else
        {
            /* not a '%', just print the character */
            count += _putchar(*format);
        }

        format++;
    }

    va_end(args);

    return (count);
}