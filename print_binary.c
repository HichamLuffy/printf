#include "main.h"
int print_binary(const char *format, ...)
{
    int count = 0;
    va_list args;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (*format == 'b')
            {
                unsigned int num = va_arg(args, unsigned int);
                char binary[32];
                int i = 0;
                while (num > 0)
                {
                    binary[i++] = (num % 2 == 1) ? '1' : '0';
                    num /= 2;
                }
                i--;
                while (i >= 0)
                {
                    _putchar(binary[i]);
                    count++;
                    i--;
                }
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
}
