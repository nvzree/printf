#include "main.h"

/**
 * _putnum -  writes integer n to stdout
 * @num: integer to print to stdout
 * @count: count of num printed
 * Return: count
 */

int _putnum(long num, int count)
{
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = num * -1;
	}
	if (num / 10)
	{
		count = _putnum(num / 10, count);
	}

	_putchar(num % 10 + '0');

	return (count + 1);
}
