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
	if (!format || !format[0])
		return (-1);
	while (*format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += _putchar(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += handle_string(str);
			}
			else if (*format == '%')
				count += _putchar('%');
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				if (num < 0)
					count++;
				count += len_num(num);
				handle_number(num);
			} else
			{
				count += _putchar('%');
				if (*format)
				{
					count += _putchar(*format);
				}
			}
		} else
			count += _putchar(*format);
	}
	return (count);
}
