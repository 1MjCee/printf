#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>


int print_percent(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
size_t _strlen(const char *str);

#endif
