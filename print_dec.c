#include "main.h"

/**
 * print_numbers -  recursively prints out numbers in base 10 irrespective
 * of their signage
 * @n: integer to be printed
 * Return: number of passes
 */
int print_numbers(int n, unsigned int i)
{
	int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
		i++;
	} else
	{
		n1 = n;
	}
	/* my base case for the recursion */
	if ((n1 / 10) == 0)
	{
		_putchar(n1 + '0');
		return (++i);
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
