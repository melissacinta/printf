#include "main.h"

/**
* print_char - function to print single characters
* @data: the character value expected form the va_list
* Return: returns the number of character printed
*/

int print_char(va_list data) /*takes in the va_list passed form _printf func.*/
{
	if (data != NULL) /*guards agains NULL character input*/
	{
		_putchar(va_arg(data, int));
	}
	return (1); /*returns the total number of character it printed*/
}
