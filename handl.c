#include "main.h"
/*
 * handle_number - chekc
 * @num: parametre
 * Return - 1
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
        handle_number(num % 10);
    }
    else if (num < 10)
    {
        _putchar(num + '0');
    }
    return (1);
}
/*
 * handle_string - check
 * @str: parametre
 * Return - i
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
