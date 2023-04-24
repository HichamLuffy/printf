#include "main.h"

/**
 * print_number - prints number
 * @num: int
 * Return: void
 */
void print_number(int num)
{
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	if (num >= 10)
	{
		print_number(num / 10);
		print_number(num % 10);
	}
	else
		_putchar(num + '0');
}

/**
 * len_num - length of a number
 * @num: int
 * Return: int
 */
int len_num(int num)
{
	if (num == 0)
		return (0);
	return (1 + len_num(num / 10));
}
