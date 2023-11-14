#include <stdarg.h>
#include "main.h"

int print_str(va_list args)
{
    int i;
    int len;
    char *string = va_arg(args, char *);

    if (string == NULL)
    {
        return (0);
    }

    len = _strlen(string);

    for (i = 0; i < len; ++i)
    {
        _putchar(string[i]);
    }

    return (len);
}