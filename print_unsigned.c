#include "main.h"
int print_uns_num(unsigned int n, unsigned int i);
/**
 * print_uns_dec -  recursively prints out unsigned numbers in base 10
 * @data: data to be print
 *
 * Return: number of passes
 */
int print_uns_dec(va_list data)
{
	unsigned int i = 0;
	unsigned int num = va_arg(data, unsigned int);

	i = print_uns_num(num, i);

	return (i);
}

/**
 * print_uns_num - recursively prints out unsigned numbers in base 10
 * @n: unsigned integer to be printed
 * @i: counter
 * Return: number of passes
 */
int print_uns_num(unsigned int n, unsigned int i)
{
	if ((n / 10) == 0)
	{
		_putchar(n + '0');
		return (++i);
	}

	i = print_uns_num((n / 10), i + 1);
	_putchar((n % 10) + '0');
	return (i);
}
