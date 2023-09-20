#include "main.h"

/**
 * _putnum -  writes integer n to stdout
 * @num: integer to print to stdout
 * @count: count of num printed so far
 * Return: he updated count of characters printed
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
/*Print the last digit as a character*/
	_putchar(num % 10 + '0');
/*Increment the count for the printed digit and return it*/
	return (count + 1);
}
