#include "main.h"

/**
 * print_ux - prints
 * @num: unsigned int
 * @base: int
 * @uppercase: int
 * Return: void
 */
void print_ux(unsigned int num, int base, int uppercase) 
{
	int digit;

	if (num >= (unsigned int)base)
		print_ux(num / base, base, uppercase);
	digit = num % base;

	if (digit < 10)
		_putchar(digit + '0');
	else
	{
		char c = (uppercase ? 'A' : 'a') + digit - 10;
		_putchar(c);
	}
}

/**
 * for_u - check code
 * @args: args
 * @count: int
 */
int for_u(va_list args, int count)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	print_ux(num, 10, 0);
	count++;
	return (count);
}
/**
 * for_o - check code
 * @args: args
 * @count: int
 */
int for_o(va_list args, int count)
{
        unsigned int num;

        num = va_arg(args, unsigned int);
        print_ux(num, 8, 0);
        count++;
        return (count);
}
/**
 * for_x - check code
 * @args: args
 * @count: int
 */
int for_x(va_list args, int count)
{
        unsigned int num;

        num = va_arg(args, unsigned int);
        print_ux(num, 16, 0);
        count++;
        return (count);
}
/**
 * for_X - check code
 * @args: args
 * @count: int
 */
int for_X(va_list args, int count)
{
        unsigned int num;

        num = va_arg(args, unsigned int);
        print_ux(num, 16, 1);
        count++;
        return (count);
}
