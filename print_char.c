#include "main.h"

/**
 * print_c - prints a single character
 * @args: char
 * Return: count of char printed
 */

int print_c(va_list args)
{
	int count = 0;
	char c = va_arg(args, int);

	_putchar(c);
	count++;

return (count);
}