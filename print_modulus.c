#include "main.h"
#define UNUSED(x) (void)(x)
/**
 *print_modulus - prints the % symbol when passed into the printf function
 *@data: the name given to the va_list
 *Return: returns the number of printed charcter
 */


int print_modulus(va_list data)
{
	UNUSED(data);
	_putchar('%');
	return (1);
}
