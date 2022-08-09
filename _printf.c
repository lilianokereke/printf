#include "main.h"

/**
 * _printf - prints anything to stdout
 * @format: the format string
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int index = 0, printed = 0;
	va_list args;

	va_start(args, format);

	while (format[index])
	{
		if (format[index] == '%')
		{
			switch (format[index + 1])
			{
				case 's':
					printed += print_string(args);
					index += 2;
					break;
			}
		}
		if (format[index])
		{
			_putchar(format[index]);
			printed++;
		}
		index++;
	}
	va_end(args);
	return (printed);
}

/**
 * _puts - prints string
 * @str: string to print
 * Return: number of characters printed
 */

int _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar (str[index]);
		index++;
	}
	return (index);
}

/**
 * print_string - Prints a string
 * Return: printed string
 */

int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
