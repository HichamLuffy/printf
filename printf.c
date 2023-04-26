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
#include "main.h"
/*
 * custom_printf - num to binary
 * @fmt: parametre
 * @...: parametre
 * Return - 1
 */

void custom_printf(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    int i = 0;
    while (fmt[i] != '\0') {
        if (fmt[i] == '%') {
            if (fmt[i+1] == 'b')
            {
                unsigned int arg = va_arg(args, unsigned int);
                unsigned int mask = 1U << ((sizeof(unsigned int) * 8) - 1);
                int digits = 0;

                while (mask > 0)
                {
                    if (arg & mask)
                    {
                        putchar('1');
                        digits++;
                    } else if (digits > 0 || mask == 1)
                    {
                        putchar('0');
                        digits++;
                    }
                    mask >>= 1;
                }
                if (digits == 0)
                {
                    putchar('0');
                }
                i += 2;
            } else
            {
                putchar(fmt[i]);
                putchar(fmt[i+1]);
                i += 2;
            }
        } else
        {
            putchar(fmt[i]);
            i++;
        }
    }
    va_end(args);
}
