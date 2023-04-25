#include "main.h"

/**
 * print_num - prints num
 * @format: int
 * @...: parametre
 * Return: void
 */
int print_num(const char *format, ...)
{
	int count = 0, num;
	va_list args;

	va_start(args, format);
	if (*format == 'd' || *format == 'i')
	{
		num = va_arg(args, int);
		if (num < 0)
			count++;
		count += len_num(num);
		handle_number(num);
	}
	va_end(args);
}
