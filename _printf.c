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
	int i;

	if (format == NULL) /* validating format */
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%') /* if format is not % */
		{
			_putchar(format[i]);
			num_printed++;
		}
		else /* if format is % */
		{
			format++; /* move to the next charctern*/
			if (format[i] == '\0')
			{
				break;
			}
			if (format[i] == 'c' || format[i] == 's' || format[i] == 'd')
			{
				num_printed += get_func(format[i])(args);
			}
			else
			{
				num_printed += _putchar('%');
			}
		}
	}
	va_end(args);
	return (num_printed);
}
