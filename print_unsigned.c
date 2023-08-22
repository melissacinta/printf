#include "main.h"
int print_uns_num(unsigned int n, unsigned int i, int base);
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

	i = print_uns_num(num, i, 10);

	return (i);
}

/**
 * print_uns_oct -  recursively prints out unsigned numbers in base 10
 * @data: data to be print
 *
 * Return: number of passes
 */
int print_uns_oct(va_list data)
{
	unsigned int i = 0;
	unsigned int num = va_arg(data, unsigned int);

	i = print_uns_num(num, i, 8);

	return (i);
}
/**
 * print_uns_num - recursively prints out unsigned numbers in base specified
 * @n: unsigned integer to be printed
 * @i: counter
 * @base: base to be printed
 * Return: number of passes
 */
int print_uns_num(unsigned int n, unsigned int i, int base)
{
	if ((n / base) == 0)
	{
		_putchar(n + '0');
		return (++i);
	}

	i = print_uns_num((n / base), i + 1, base);
	_putchar((n % base) + '0');
	return (i);
}
