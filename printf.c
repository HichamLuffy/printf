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
 * percent - prints percent
 *
 * Return: void
 */
void percent(void)
{
	int count = 0;

	_putchar('%');
	count++;
}

/**
 * do_something - does something
 * @format: char *
 * Return: void
 */
void do_something(const char *format)
{
	int count = 0;

	_putchar('%');
	count++;
	if (*format)
	{
		_putchar(*format);
		count++;
	}
}
/**
 * do_this - do
 * @format: char *
 * Return: void
 */
void do_this(const char *format)
{
	int count = 0;

	_putchar(*format);
	format++;
	count++;
}
/**
 * _printf - prints
 * @format: string to be printed
 * @...: args
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	int count = 0, num;
	va_list args;
	char c, *str;

	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				count += _putchar(c);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				count += handle_string(str);
			} else if (*format == '%')
				percent();
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				print_num(num);
			}
			else if (*format == '\0')
				return (-1);
			else
			{
				do_something(format);
			}
			format++;
		} else
		{
			do_this(format);
		}
	}
	return (count);
}
