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
 * len_num - Computes the number of digits in an integer.
 * @num: The integer to compute the number of digits for.
 *
 * Return: The number of digits in @num.
 */
int len_num(int num)
{
	int count = 0;

	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/**
 * handle_number - Handles the printing of an integer.
 * @num: The integer to print.
 *
 * Return: Always 1.
*/
int handle_number(int num)
{
	if (num == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		handle_number(147483648);
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		handle_number(num / 10);
	}
	_putchar(num % 10 + '0');
	return (1);
}

/**
 * handle_string - check code
 * @str: parametre
 * Return: i
*/
int handle_string(char *str)
{	int i = 0;

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
/**
 * handle_binary - check code
 * @num: parametre
 * Return: count
*/
int handle_binary(unsigned int num)
{
	int count = 0;

	if (num / 2)
		count += handle_binary(num / 2);
	count += _putchar((num % 2) + '0');
	return (count);
}
