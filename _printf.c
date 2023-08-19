#include "main.h"

/**
* _printf - picks the right specifier passed to it
* @format: the initial string
* Return: returns the number of characters printed
*/

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	specifiers arr[] =
	{
		{"%s", print_string}, {"%c", print_char}
	};

	if (format == NULL)
		return;

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i];
	}
	return (i - 1);


	va_end(args);
}
