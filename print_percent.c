<<<<<<< HEAD
#include "main.h"
#include <stdarg.h>
/**
 * print_percent - prints %
 * @args: arguments list
 * Return: printed %.
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
=======
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

    if (_putchar('%') == -1)
    {
        return (-1);
    }
    return (1);
}
>>>>>>> 086bd2450d319deb74a1dea2034aaaff489a622f
