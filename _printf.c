#include "main.h"

/**
* _printf - picks the right specifier passed to it
* @format: the initial string
* Return: returns the number of characters printed
*/

int _printf(const char *format, ...)
{
	/**
	 * here i added two more variables to keep track of the arr[] length
	 * and the length of substitutions using length and j respectively
	 */
	int i, j, length = 0;
	va_list args;

/* in the header file i had to add typdef to the struct it was failing */
	specifier arr[] = {{"%d", print_dec}};

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		/**
		 * intialize this to (arr.length - 1). i am using 0 because
		 * currently specifiers array only contains one item which is at index 0
		 */
		j = 0;
		while (j >= 0)
		{
			/**
			 * here i am making a check to pick the right specifier to use
			 * in printing the args
			 */
			if ((arr[j].spec[0] == format[i]) && (arr[j].spec[1] == format[i + 1]))
			{
				length += arr[j].f_ptr(args);
				/* jump to places if we succesfully enter this statement */
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
