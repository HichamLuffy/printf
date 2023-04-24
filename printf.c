#include "main.h"
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
}
