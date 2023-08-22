#include "main.h"

/**
 * print_strEx - prints a string with non-printable characters escaped
 * @data: the string to be printed
 * Return: the number of characters printed
 */
int print_strEx(va_list data)
{
	char *str = va_arg(data, char *);
	int count = 0;

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (*str == '\n')
			{
				count += _putchar('0');
				count += _putchar('A');
			}
			else
			{
				count += _putchar('0' + ((*str >> 4) & 0xF));
				count += _putchar('0' + (*str & 0xF));
			}
		}
		else
		{
			count += _putchar(*str);
		}

		str++;
	}

	return (count);
}
