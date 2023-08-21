#include "main.h"

/**
 * print_numbers -  recursively prints out numbers in base 10 irrespective
 * of their signage
 * @n: integer to be printed
 * @i: counter
 * Return: number of passes
 */
int print_numbers(int n, unsigned int i)
{
	int num, remainder = n % 10, digit;
	int exp = 1;

	n = n / 10;
	num = n;

	if (remainder < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		remainder = -remainder;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(remainder + '0');
	return (i);
}
/**
 * print_dec - function to print decimal integers denoted by % d
 * @data: the character value expected form the va_list
 * Return: returns the number of character printed
 */

int print_dec(va_list data)
{
	int n = va_arg(data, int);
	unsigned int  i = 1;

	i = print_numbers(n, i);

	return (i);
}
