#include "main.h"
#include <stdarg.h>
/**
 * _printid - prints
 * @format: string to be printed
 * @args: args
 * @count: parametre
 *
 *Return: 1 count
 */
int _printid(va_list args, int count, const char *format)
{
	int num = va_arg(args, int);

	if (num < 0)
		count++;
	count += len_num(num);
	handle_number(num);
	return (count);
}
/**
 *_prints - check your code
 *@format: parametre
 *@args: arg
 *@count: parametre
 *
 *Return: 1 count
 */
int _prints(va_list args, int count, const char *format)
{
	char *str;

	str = va_arg(args, char *);
	count += handle_string(str);
	return (count);
}
/**
 * _printf - prints
 * @format: string to be printed
 * @...: args
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	char c, *str;
	int num, count = 0;
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
			{
				c = va_arg(args, int);
				count += _putchar(c);
			} else if (*format == 's')
				count = _prints(args, count, format);
			else if (*format == '%')
				count += _putchar('%');
			else if (*format == 'd' || *format == 'i')
				count = _printid(args, count, format);
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
