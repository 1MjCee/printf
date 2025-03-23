#include <stdarg.h>
#include <string.h>
#include "main.h"
int _printf(const char *format, ...)
{
	va_list args;
	int count, i, d;
	char sc;
	char *df;

	va_start(args, format);
	i = 0;
	count = 0;
	while(format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			sc = format[i];
			switch(sc)
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					df = va_arg(args, char *);
					d = 0;
					while(d < (int)strlen(df))
					{
						_putchar(df[d]);
						d++;
					}
					count = count + strlen(df);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
