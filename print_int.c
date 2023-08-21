#include "main.h"

/**
* print_int - function to print integers denoted by %i
* @data: the character value expected form the va_list
* Return: returns the number of character printed
*/

int print_int(va_list data)
{
	unsigned int i = 1;
	int num = va_arg(data, int);

	i = print_numbers(num, i);

	return (i);
}
