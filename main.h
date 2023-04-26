#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>
#include <limits.h>

void custom_printf(const char* fmt, ...);
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
int _printfn(const char *format, ...);
int print_binary(const char *format, ...);

#endif
