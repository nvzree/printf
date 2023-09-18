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
			_putchar(*format);
			num_printed++;
		}
		else /* if format is % */
		{
			format++; /* move to the next charctern*/
			if (*format == '\0')
			{
				break;
			}
			if (*format == 'c' || *format == 's' || *format == 'd')
			{
				num_printed += get_func(*format)(args);
			}
			else
			{
				num_printed += _putchar('%');
			}
		}
		format++;
	}
	va_end(args);
	return (num_printed);
}
