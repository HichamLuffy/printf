#include "main.h"
/**
 * _printid - prints
 * @args: args
 * @count: parametre
 *
 *Return: 1 count
 */
int _printid(va_list args, int count)
{
	int num = va_arg(args, int);

	if (num < 0)
		count++;
	count += len_num(num);
	handle_number(num);
	return (count);
}
/**
 *_prints - check your code
 *@args: arg
 *@count: parametre
 *
 *Return: 1 count
 */
int _prints(va_list args, int count)
{
	char *str;

	str = va_arg(args, char *);
	count += handle_string(str);
	return (count);
}
/**
 *print_binary - check your code
 *@args: arg
 *@count: parametre
 *
 *Return: 1 count
 */
int print_binary(va_list args, int count)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	count += handle_binary(num);
	return (count);
}
/**
 *_printc - check your code
 *@args: arg
 *@count: parametre
 *
 *Return: 1 count
 */
int printc(va_list args, int count)
{
	char c;

	c = va_arg(args, int);
	count += _putchar(c);
	return (count);
}
