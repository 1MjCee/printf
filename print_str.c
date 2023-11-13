#include <stdarg.h>
#include "main.h"

int print_str(va_list args)
{
    char *string;
    int i;
    int len;

    string = va_arg(args, char *);
    if (string == NULL)
    {
        string = "(NULL)";
        len = _strlen(string);
        for (i = 0; i < len; i++)
            _putchar(string[i]);
        return (len);
    }
    else
    {
        len = _strlen(string);
        for (i = 0; i < len; ++i) {
            _putchar(string[i]);
        }
        return (len);
    }
}