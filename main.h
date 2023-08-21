#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct formats - a data type, holds the variety of specifiers
 * @spec: a char pointer to hold individual specifier type
 * @f_ptr:a funtion pointer that  executes corresponding function to the spec.
 */
typedef struct formats
{
	char *spec;
	int (*f_ptr)();
} specifier;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list data);
int print_numbers(int n, unsigned int i);
int print_dec(va_list data);
int print_int(va_list data);
int print_string(va_list data);
int print_modulus(va_list data);
#endif
