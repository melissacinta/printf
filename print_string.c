#include "main.h"
/**
 *print_string - prints string
 *@data: that's the va_list name
 *Return: returns the total number of characters it printed
 */

int print_string(va_list data)
{
	int len, i = 0;
	char *str = va_arg(data, char *);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; i < 6; i++)
		{
			_putchar(str[i]);
		}
		return (6);

	}
	else
	{
		for (len = 0; str[len] != '\0'; len++)
		{} /* I used this loop to get the lenght of the string*/

		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
		return (len);
	}
	return (-1);
}
