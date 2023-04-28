#include "main.h"
/**
 * _printid - prints
 * @format: string to be printed
 * @args: args
 * @count: parametre
 *
 *Return: 1 count
 */
int _printid(va_list args, int count, const char *format)
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
 *@format: parametre
 *@args: arg
 *@count: parametre
 *
 *Return: 1 count
 */
int _prints(va_list args, int count, const char *format)
{
        char *str;

        str = va_arg(args, char *);
        count += handle_string(str);
        return (count);
}
