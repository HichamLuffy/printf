#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints
 * @format: string to be printed
 * @...: args
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == 'c')
				count = printc(args, count);
			else if (*format == 's')
				count = _prints(args, count);
			else if (*format == '%')
				count += _putchar('%');
			else if (*format == 'd' || *format == 'i')
				count = _printid(args, count);
			else if (*format == 'b')
				count = print_binary(args, count);
			else
			{
				count += _putchar('%');
				if (*format)
					count += _putchar(*format);
			}
			format++;
		} else
		{
			format += _putchar(*format);
			count++;
		}
	}
	va_end(args);
	return (count);
}
