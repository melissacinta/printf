#include "main.h"

/**
 * print_revstr - prints string passed in reverse
 * @data: the alisa for the va_list passed for the printf function
 * Return: returns thr total number of values printed
 */

int print_revstr(va_list data)
{
	char *str = va_arg(data, char *);
	int a, l, x;

	if (str == NULL)
	{
		str = "(null)";
		for (a = 0; a < 6; a++)
			_putchar(str[a]);
		return (6);
	}

	for (l = 0; str[l]; l++)
	{}

	x = l;

	while (l > 0)
	{
		_putchar(str[l - 1]);
		l--;
	}
	return (x);
}
