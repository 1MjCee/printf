#include "main.h"
#include <stdarg.h>
/**
 * print_percent - prints %
 * @args: arguments list
 * @return: printed %.
 */
int print_percent(va_list args)
{
    (void)args;
    return (_putchar('%'));
}