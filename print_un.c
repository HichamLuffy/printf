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
