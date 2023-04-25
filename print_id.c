#include "main.h"
/**
 *printf_id - prints
 *@format: string to be printed
 *@...: args
 *Return: length of format
 */
int printf_id(const char *format, ...)
{
	va_list args;
	int count = 0;
	char buf[32];
	int num, i = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				if (num < 0)
				{
					num = -num;
					putchar('-');
					count++;
				}
				do {
					buf[i++] = num % 10 + '0';
				} while (num /= 10);
				while (--i >= 0)
				{
					putchar(buf[i]);
					count++;
				}
			} else if (*format == '%')
			{
				count += putchar('%');
			}
		} else
		{
			count += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
