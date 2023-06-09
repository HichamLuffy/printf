#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <limits.h>
int printc(va_list args, int count);
int handle_binary(unsigned int num);
int print_binary(va_list args, int count);
int _printid(va_list args, int count);
int _prints(va_list args, int count);
int _print_unsigned(const char *format, ...);
void print_num(int num);
int handle_string(char *str);
int handle_number(int num);
void print_number(int num);
int _strlen(char *str);
void print_string(char *str);
int _putchar(char c);
int len_num(int num);
int _printf(const char *format, ...);
int len_string(const char *str);
int for_u(va_list args, int count);
int for_o(va_list args, int count);
int for_x(va_list args, int count);
int for_X(va_list args, int count);
#endif
