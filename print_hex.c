#include "main.h"

int print_hexadecimal(unsigned int n, unsigned int i, char cased);

/**
 * print_hex - function to print unsigned hexadecimal integers (lowercase)
 * @data: the character value expected from the va_list
 * Return: returns the number of characters printed
 */
int print_hex(va_list data)
{
	unsigned int i = 0;
	unsigned int num = va_arg(data, unsigned int);

	i = print_hexadecimal(num, i, 'a');

	return (i);
}

/**
 * print_hex_upper_case - function to print unsigned hexadecimal integers
 * (uppercase)
 * @data: the character value expected from the va_list
 * Return: returns the number of characters printed
 */
int print_hex_upper_case(va_list data)
{
	unsigned int i = 0;
	unsigned int num = va_arg(data, unsigned int);

	i = print_hexadecimal(num, i, 'A');

	return (i);
}

/**
 * print_hexadecimal - recursively prints out unsigned numbers in
 * base 16 (hexadecimal)
 * @n: unsigned integer to be printed
 * @i: counter
 * @cased: case specifier
 * Return: number of passes
 */
int print_hexadecimal(unsigned int n, unsigned int i, char cased)
{
	int remainder;

	if ((n / 16) == 0)
	{
		remainder = n % 16;

		_putchar(remainder < 10 ? remainder + '0' : remainder - 10 + cased);
		return (++i);
	}

	i = print_hexadecimal((n / 16), i + 1, cased);
	remainder = n % 16;
	_putchar(remainder < 10 ? remainder + '0' : remainder - 10 + cased);
	return (i);
}
