#include "main.h"

/**
 * print_d - prints signed integer
 * @args: integer to print
 * Return: count on int printed
 */

int print_d(va_list args)
{
	int count;

	int d = va_arg(args, int);

	count = _putnum(d, 0);
	return (count);
}
