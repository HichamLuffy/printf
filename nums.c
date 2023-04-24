#include "main.h"

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

int len_num(int num)
{
        if (num == 0)
                return (0);
        return (1 + len_num(num / 10));
}
