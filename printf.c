#include "main.h"
/**
 * _printf - prints
 * @format: const char *
 * @...
 * Return: int
 */
int _printf(const char *format, ...)
{
    char c, *str;
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
            if (*format == '\0')
                return (-1);
            if (*format == 'c')
            {
                c = va_arg(args, int);
                count += _putchar(c);
            } else if (*format == 's')
            {
                str = va_arg(args, char *);
                count += handle_string(str);
            } else if (*format == '%')
                count += _putchar('%');
            else
            {
                count += _putchar('%');
                if (*format)
                    count += _putchar(*format);
            }
            format++;
        } else
        {
            count += _putchar(*format);
            format++;
        }
    }
    va_end(args);
    return (count);
}
