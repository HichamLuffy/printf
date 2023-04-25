#include "main.h"
/**
 * _putchar - check
 * @c: parametre
 * Return: length of format
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * num - prints
 * @num: string to be printed
 * Return: length of num
 */
int len_num(int num)
{
	if (num == 0)
		return (0);
	return (1 + len_num(num / 10));
}
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
	while (*format)
	{
		if (*format == '%')
		{
			format++;

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
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				if (num < 0)
					count++;
				count += len_num(num);
				handle_number(num);
			}
			else if (*format == '\0')
				return (-1);
			else
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
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}
	}
	return (count);
}
