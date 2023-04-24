#include "main.h"

int _putchar(char c)
{
        return(write(1, &c, 1));
}

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

int _strlen(char *str)
{
        int i = 0;

        while (str[i])
                i++;
        return (i);
}
