#include "main.h"

int _printf(const char *format, ...)
{
	int letter_counter = 0;
	va_list recorded_arguments;

	if (format == NULL)
		return (-1);

	va_start(recorded_arguments, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			letter_counter++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				letter_counter++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(recorded_arguments, int);
				write(1, &c, 1);
				letter_counter++;
			}
			else if (*format == 's')
			{
				char *string = va_arg(recorded_arguments, char*);
				int lenstr = strlen(string);
				write(1, string, lenstr);
				letter_counter++;
			}
		}
		format++;
	}
	va_end(recorded_arguments);
	return (letter_counter);
}

int main(void)
{
  _printf("hello, %s\n", "Jordan");
  _printf("sign %%\n");
  _printf("grade: %c\n", 'A');
  return (0);
}