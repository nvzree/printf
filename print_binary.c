#include "main.h"

/**
 * print_b - prints a binary number
 * @args: argumaent to take in
 * Return: returns count
 */

int print_b(va_list args)
{
	int f = 0;
	int n = 0;
	int i;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int j;
	int a = 1, b;

	for (i = 0; i < 32; i++)
	{
		j = ((a << (31 - i)) & num);
		if (j >> (31 - i))
			f = 1;
		if (f)
		{
			b = j >> (31 - i);
			_putchar(b + 48);
			n++;
		}
	}
	if (n == 0)
	{
		n++;
		_putchar('0');
	}
	return (n);

}
