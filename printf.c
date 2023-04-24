#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
					count += 6;
				else
					count += _strlen(str);
				print_string(str);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int number = va_arg(args, int);

				if (number < 0)
				count++;
				count += len_num(number);
				print_number(number);
			}
			else
			{
				char c = va_arg(args, int);

				putchar(c);
				count++;
				}
			}
		else
		{
			_putchar(*format);
			count++;
			}
		format++;
		}

	va_end(args);
	return count;
}
