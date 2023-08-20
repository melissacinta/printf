#include "main.h"

/**
 * print_numbers -  recursively prints out numbers in base 10 irrespective
 * of their signage
 * @n: integer to be printed
 * Return: number of passes
 */
int print_numbers(int n)
{
	unsigned int n1, i = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
		i++;
	} else
	{
		n1 = n;
	}

	if ((n1 / 10) == 0)
	{
		_putchar(n1 + '0');
		print_numbers((n1 / 10));
		return (i + 1);
	}

	i = print_numbers((n1 / 10), i + 1);
	_putchar((n1 % 10) + '0');
	return (i);
}
/**
* print_dec - function to print decimal integers denoted by % d
* @data: the character value expected form the va_list
* Return: returns the number of character printed
*/

int print_dec(va_list data)
{
	unsigned int i = 0;
	int num = va_arg(data, int);

	/**
	 * here i am calling a recursive function to handle printing of numbers
	 * this function is exactly similing to task 101 of more functions
	 * project the only difference is have to keep track of the specifier
	 * count
	 */
	i = print_numbers(num, i);

	return (i);
}
