#include "main.h"
/**
 * _printfn - prints
 * @format: string to be printed
 * @...: args
 * Return: length of format
 */
int _printfn(const char *format, ...)
{
    	int count = 0;
	va_list args;
    	va_start(args, format);
	
    	while (*format != '\0')
	{
		if (*format == '%' && (*(format+1) == 'd' || *(format+1) == 'i'))
		{
			int num = va_arg(args, int);

		    	printf("%d", num);
	    		count++;
	    		format += 2; // Advance the format string past the conversion specifier

		} else
	       	{

	    		putchar(*format);
			count++;
	    		format++;
		}
	}
    	va_end(args);
	return count;
}


