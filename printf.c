#include "main.h"
<<<<<<< HEAD
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;
    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                    count += printf("%c", va_arg(args, int));
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char*));
                    break;
                case '%':
                    count += printf("%%");
                    break;
                default:
                    count += printf("Invalid conversion specifier");
                    break;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
=======

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

				if (!str)
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

				_putchar(c);
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
	return (count);
>>>>>>> a8595a54749311737c9792455e623603e0624d8b
}
