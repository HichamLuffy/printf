#include "main.h"
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

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				handle_number(num);
				count += len_num(num);
			} else
			{
				_putchar(*format);
				count++;
				format++;
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
