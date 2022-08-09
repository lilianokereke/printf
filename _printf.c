#include "main.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	int numb = 0;
	va_start(args, format);

	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c' :
					numb += print_char(args);
					i += 2;
					break;

			}
	}
		_putchar(format[i]);
		numb++;
		i++;
}
return (numb);
}

