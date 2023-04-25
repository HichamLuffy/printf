#include "main.h"
/**
 * _putchar - check
 * @c: parametre
 * Return: length of format
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * len_num - prints
 * @num: string to be printed
 * Return: length of num
 */
int len_num(int num)
{
	if (num == 0)
		return (0);
	return (1 + len_num(num / 10));
}

/**
 * handle_number - check code
 * @num: parametre
 * Return: 1
 */
int handle_number(int num)
{
	if (num == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		handle_number(147483648);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		handle_number(num / 10);
		handle_number(num % 10);
	}
	else if (num < 10)
	{
		_putchar(num + '0');
	}
	return (0);
}
/**
 * handle_string - check code
 * @str: parametre
 * Return: i
 */
int handle_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		handle_string("(null)");
		return (6);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
