#include "main.h"

/**
 * print_d - prints signed integer
 * @args: integer to print
 * Return: count on int printed
 */

int print_d(va_list args)
{
	int count;
/*Retrieve the next argument as an integer*/
	int d = va_arg(args, int);

	count = _putnum(d, 0);
	/*Return the total number of characters (digits) printed*/
	return (count);
}
