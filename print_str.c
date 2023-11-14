#include <stdarg.h>
#include "main.h"

int print_str(va_list args)
{
    char *string = va_arg(args, char *);

    if (string == NULL)
    {
        string = "(NULL)";
    }

    int len = _strlen(string);

    for (int i = 0; i < len; ++i)
    {
        _putchar(string[i]);
    }

    return len;
}