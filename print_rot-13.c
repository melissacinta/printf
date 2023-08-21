#include "main.h"

/**
 * print_rot-13 - prints the rot encoded version of the string
 * @data: the va_list passed from the printf function
 * Return: returns the total number of the
 */

int print_rot_13(va_list data)
{
	char *str = va_arg(data, char*);
	int x = 0;
	int y;
	int counter = 0;
	int z = 0;
	char normal[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char encoded[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		return (-1);

	while (str[x])
	{
		z = 0;
		for (y = 0; y < 52; y++)
		{
			if (str[x] == normal[y])
			{
				_putchar(encoded[y]);
				counter++;
				z = 1;
				break;
			}
		}
		if (z == 0)
		{
			_putchar(str[x]);
			counter++;
		}
		x++;
	}
	return (counter);
}
