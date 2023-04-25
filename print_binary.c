#include "main.h"
/**
 * binary - prints binary
 * @n: unsigned int
 * Return: void
 */
void binary(unsigned int n)
{
	if (n > 1) 
	{
		binary(n / 2);
	}
	_putchar((n % 2) ? '1' : '0');
}
/**
 * print_binary - prints u int converted to binary
 * @format: cons char*
 * @...: args
 * Return: int
 */
int print_binary(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
				case 'b':
				       	{
					      	unsigned int n = va_arg(args, unsigned int);
				      		binary(n);	
			      			break;
					 }
				default:
					count += _putchar('%');
					count += _putchar(*format);	
			      		break;
			}
		} else
	       	{
    			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);

}
