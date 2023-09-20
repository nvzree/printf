#include "main.h"
#include <string.h>

/**
 * print_c - prints a single character
 * @args: char
 * Return: count of char printed
 */

int print_c(va_list args)
{
	int count = 0;
	char c = va_arg(args, int);
/*Check if the character is null*/
	if (c == 0)
	{
		/*If yes, change it to the null character '\0'*/
		c = '\0';
	}

	_putchar(c);
	count++;
/*Return the total number of characters printed*/
	return (count);
}
