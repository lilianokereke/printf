#include "main.h"

/**
 * print_number - print a number to stdout
 * @num: digit to be printed
 * Return: printed digit
 */

int print_number(char *num)
{
	int i = 0;

	while (num[i])
	{
		_putchar(num[i]);
		i++;
	}
	return (i);
}

/**
 * print_digit - print digit to output
 *
 */

int print_digit(va_list args)
{
	return (print_number(va_arg(args char *)));
}
