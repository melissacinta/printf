#include "main.h"

/**
 * print_numbers - prints an integer
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
		i++;
	}

	if (n1 / 10)
	{
		print_numbers((n1 / 10));
	}

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

	i = print_numbers(num);

	return (i);
}
