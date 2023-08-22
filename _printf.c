#include "main.h"

/**
* _printf - picks the right specifier passed to it
* @format: the initial string
* Return: returns the number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0, j, length = 0;
	va_list args;

	specifier arr[] = {{"%d", print_dec}, {"%c", print_char},
	{"%s", print_string}, {"%i", print_int}, {"%%", print_modulus},
	{"%b", print_binary}, {"%R", print_rot_13}, {"%u", print_uns_dec},
	{"%o", print_uns_oct}, {"%x", print_hex}, {"%X", print_hex_upper_case},
	{"%r", print_revstr}, {"%S", print_strEx}};

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Loop:
	while (format[i] != '\0')
	{
		j = 12;
		while (j >= 0)
		{
			/**
			 * here i am making a check to pick the right specifier to use
			 * in printing the args
			 */
			if ((arr[j].spec[0] == format[i]) && (arr[j].spec[1] == format[i + 1]))
			{
				length += arr[j].f_ptr(args);
				/* jump to Loop if we succesfully enter this statement */
				i = i + 2;
				goto Loop;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
