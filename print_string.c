#include "main.h"

/**
 * print_s - Print a string
 * @args: string to print
 * Return: count of string printed
 */

int print_s(va_list args)
{
	int count = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
