#include "main.h"
/**
 * _printf - prints
 * @format: string to be printed
 * @...: args
 * Return: length of format
 */

int _print_unsigned(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);
    while (*format) {
        if (*format == '%')
	{
            format++;
            if (*format == 'u')
	    {
		    unsigned int num = va_arg(args, unsigned int);
    		    count += printf("%u", num);   
	    } else if (*format == 'o')
	    {
		    unsigned int num = va_arg(args, unsigned int);
		    count += printf("%o", num);
	    } else if (*format == 'x')
	    {
		    unsigned int num = va_arg(args, unsigned int);
		    count += printf("%x", num);
	    } else if (*format == 'X')
	    {
		    unsigned int num = va_arg(args, unsigned int);
		    count += printf("%X", num);
	    } else
	    {
		    putchar(*format);
		    count++;
	    }
	} else
	{
		putchar(*format);
		count++;
	}
	format++;
    }
    va_end(args);
    return (count);
}
