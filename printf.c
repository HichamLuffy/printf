#include "main.h"

/**
 * handle_number - handles num
 * @num: int
 * Return: int
 */
int handle_number(int num)
{
	int count = 0;

	if (num < 0)
		count++;
	count += len_num(num);
	if (num == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		handle_number(147483648);
		else if (num < 0)
		{
			_putchar('-');
			count++;
			num = -num;
		}
		if (num >= 10)
		{
			handle_number(num / 10);
			handle_number(num % 10);
		}
		else if (num < 10)
		{
			_putchar(num +'0');
		}
		return(count);
	}
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
