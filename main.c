#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int a = 42, b = 255;

	_print_unsigned("Decimal: %u\nOctal: %o\nLowercase Hexadecimal: %x\nUppercase Hexadecimal: %X\n", a, b, b, b);
	return (0);
}
