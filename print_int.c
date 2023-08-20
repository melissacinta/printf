#include "main.h"

/**
* print_int - function to print integers denoted by %i
* @data: the character value expected form the va_list
* Return: returns the number of character printed
*/

int print_int(va_list data)
{
	unsigned int i = 0;
	int num = va_arg(data, int);

	/**
	 * here i am calling a recursive function to handle printing of numbers
	 * this function is exactly similar to task 101 of more functions
	 * project the only difference is have to keep track of the specifier
	 * count
	 */
	i = print_numbers(num, i);

	return (i);
}
