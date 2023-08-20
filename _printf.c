#include "main.h"

/**
* _printf - picks the right specifier passed to it
* @format: the initial string
* Return: returns the number of characters printed
*/

int _printf(const char *format, ...)
{
	int i, j, length = 0;
	va_list args;

	specifier arr[] =
	{
		{"%d", print_dec}
	};

	va_start(args, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		j = 0;

		while (j >= 0)
		{
			if ((arr[j].spec[0] == format[i]) && (arr[j].spec[1] == format[i + 1]))
			{
				length += arr[j].f_ptr(args);
				i = i + 2;
				break;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
	}


	va_end(args);
	return (length);
}
