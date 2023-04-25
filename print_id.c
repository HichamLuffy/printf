#include "main.h"
/**
 *printf_id - prints
 *@format: string to be printed
 *@...: args
 *Return: length of format
 */
int printf_id(const char *format, ...)
{
	int num, count = 0;
	va_list args;

	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '\0')
			return (-1);
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				if (num < 0)
					count++;
				count += len_num(num);
				handle_number(num);
			} else
			{
				_putchar('%');
				count++;
				if (*format)
				{
					_putchar(*format);
					count++;
				}
			}
			format++;
		} else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
