#include "main.h"

/**
 * print_num - prints num
 * @num: int
 * Return: void
 */
void print_num(int num)
{
	int count = 0;

	if (num < 0)
		count++;
	count += len_num(num);
	handle_number(num);
}
/**
 * handle_integer - handles i and d
 * @format: const char*
 * @args: args
 * @count: int *
 * Return: int
 */
int handle_integer(const char *format, va_list args, int *count)
{
	int num = va_arg(args, int);

	if (num < 0)
	{
		(*count)++;
	}
	(*count) += len_num(num);
	handle_number(num);
	return (1);
}
/**
 * handle_other - handles other
 * @format: cost char *
 * @args: args
 * @count: int*
 * Return: int
 */
int handle_other(const char *format, va_list args, int *count)
{
	char c, *str;

	switch (*format)
	{
		case 'c':
			c = va_arg(args, int);
			(*count) += _putchar(c);
			break;
		case 's':
			str = va_arg(args, char *);
			(*count) += handle_string(str);
			break;
		case '%':
			(*count) += _putchar('%');
			break;
		default:
			(*count) += _putchar('%');
			if (*format)
			{
				(*count) += _putchar(*format);
			}
			break;
	}
	return (1);
}
/**
 * _printf - prints
 * @format: const char *
 * @...
 * Return: int
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (!format || !format[0])
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				handle_integer(format, args, &count);
			} else
			{
				handle_other(format, args, &count);
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
