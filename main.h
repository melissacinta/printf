#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct formats - a data type, holds the variety of specifiers
 * @spec: a char pointer to hold individual specifier type
 * @f_ptr:a funtion pointer that  executes corresponding function to the spec.
 */
typedef struct formats
{
	char *spec;
	int (*f_ptr)();
}specifier;


int _putchar(char c);
int _printf(const char *format, ...);
int print_numbers(int n);
int print_dec(va_list data);


#endif
