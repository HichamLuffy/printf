#include "main.h"
/**
 * _printf - prints
 * @format: string to be printed
 * @...: args
 * Return: length of format
 */

int _print_unsigned(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;

    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == 'u') {
                unsigned int num = va_arg(args, unsigned int);
                unsigned int div = 1;
                while (num / div > 9) {
                    div *= 10;
                }
                while (div) {
                    putchar('0' + (num / div));
                    num %= div;
                    div /= 10;
                    count++;
                }
            } else if (*format == 'o') {
                unsigned int num = va_arg(args, unsigned int);
                unsigned int octal = 0;
                unsigned int base = 1;
                while (num) {
                    octal += (num % 8) * base;
                    num /= 8;
                    base *= 10;
                }
                while (base > 1) {
                    base /= 10;
                    putchar('0' + (octal / base));
                    octal %= base;
                    count++;
                }
            } else if (*format == 'x' || *format == 'X') {
                unsigned int num = va_arg(args, unsigned int);
                char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
                char *hex_ptr = hex;
                if (*format == 'X') {
                    hex_ptr -= 6;
                }
                unsigned int mask = 0xf0000000;
                while (mask && !(num & mask)) {
                    mask >>= 4;
                }
                while (mask) {
                    putchar(*(hex_ptr + ((num & mask) >> (mask == 0xf0000000 ? 28 : 24))));
                    count++;
                    mask >>= 4;
                }
            } else {
                putchar(*format);
                count++;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}
