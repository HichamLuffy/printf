#include "main.h"
/**
 *len_num - prints
 *@num: string to be printed
 *Return: length of num
 */
int len_num(int num)
{
	    if (num == 0)
		            return (0);
	        return (1 + len_num(num / 10));
}
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
