#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int _printf(const char *format, ...)
{
	va_list args;
	int count, i;
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
					printf("%c", va_arg(args, int));
					count++;
					break;
				case 's':
					df = va_arg(args, char *);
					printf("%s", df);
					count = count + strlen(df);
					break;
				case '%':
					printf("%%");
					count++;
					break;
			}
		}
		else
		{
			printf("%c", format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
