#include "main.h"

/**
 * _putchar - prints character
 * @c: char to be printed
 * Return: int 1 if succeded, -1 if fails
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - prints string
 * @str: string to be [rinted
 * Return: void
 */
void print_string(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _strlen - length of a string
 * @str: char *
 * Return: int length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
