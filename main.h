#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <stddef.h>

int process_format_string(const char *format, va_list args, int *count);
int print_percent(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int print_integer_d(va_list args);
int print_integer_i(va_list args);
size_t _strlen(const char *str);
int print_unsigned_integer(va_list args);
int print_octal_integer(va_list args);
int print_hexadecimal_integer(va_list args);
int print_hexadecimal_upper(va_list args);
int print_binary(va_list args);
int print_value_hex(int value);
int print_ascii_char(va_list args);

#endif
