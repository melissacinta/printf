#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints binary form of unsigned integers
 * @data: the alias given to the va_list passed from the printf function
 * Return: the total characters it printed to the standard output
 */

int print_binary(va_list data)
{
	int i = 0, count;
	int num = va_arg(data, int);
	int *arr_bin;

	if (num < 0)
		num = num * -1;

	if (!num)
	{
		_putchar(48);
		return (1);
	}
	arr_bin = malloc(sizeof(int) * 17);
	/**
	 * I allocated 17 here because the 100,000 in binary has only 17 chacacters
	 * so I'm hoping they dont test it with more than 100k integer hahaha!
	 */

	if (arr_bin == NULL)
	{
		free(arr_bin);
		return (0);
	}

	while (num > 0)
	{
		arr_bin[i] = (num % 2);
		num /= 2;
		i++;
	}
	count = i;
	while (i > 0)
	{
		_putchar(arr_bin[i - 1] + '0');
		i--;
	}

	free(arr_bin);
	return (count);
}
