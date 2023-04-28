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
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				va_end(args);
				return (-1);
			if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				handle_number(num);
				count += len_num(num);
				count++;
			} else if (*format == 'c')
			{
				char c = (char) va_arg(args, int);

				count += _putchar(c);
			} else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				handle_string(str);
			} else
			{
				_putchar(*format);
				count++;
			}
			format++;
		} else
		{
			count += _putchar(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}
