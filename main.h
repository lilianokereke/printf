#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list args);
int _puts(char *str);
int print_char(va_list);
int print_number(char *num);
int print_digit(va_list args);

#endif
