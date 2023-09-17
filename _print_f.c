#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string. composed of zero or more directives
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int num_printed = 0;

	if (format == NULL) /* validating format */
		return (-1);

	va_start(args, format);

	while (*format) /* iterate through the characters of format */
	{
		if (*format != '%') /* if format is not % */
		{
			write(1, format, 1);
			num_printed++;
		}
		else /* if format is % */
		{
			format++; /* move to the next charctern*/
			if (*format == '\0')
			{
				break;
			}
			if (*format == '%')
			{
				write(1, format, 1);
				num_printed++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				num_printed++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char*);

				write(1, s, strlen(s));
				num_printed += strlen(s);
			}
		}
		format++;
	}
	va_end(args);
	return (num_printed);
}

/**
 * main - sample program
 * Return: 0 on success
 */

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	_printf("Printing Stirings and Characters.... %s, %c, %%\n", "Hello", "W");
	return (0);
}
