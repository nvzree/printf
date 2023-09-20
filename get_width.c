#include "main.h"

/**
 * get_width - Function that Calculates the width for printing
 * @format: Formatted string in which to print the arguments
 * @i: Pointer to the current position in the format string
 * @list: List of arguments
 * Return: Width
 */
int get_width(const char *format, int *i, va_list list)
{
	int width = 0;

	while (format[*i + 1] != '\0')
	{
		if (is_digit(format[*i + 1]))
		{
			width = width * 10 + format[*i + 1] - '0';
			(*i)++;
		}
		else if (format[*i + 1] == '*')
		{
			(*i)++;
			width = va_arg(list, int);
			break;
		}
		else
		{
			break;
		}
	}

	return (width);
}
