#include "main.h"

/**
 * get_func - returns pointer to function based on value of str
 * @str: parameter to function
 * Return: return integer
 */

int (*get_func(char str)) (va_list arg)
{
	if (str == 'c')
	{
		return (&print_c);
	}
	else if (str == 's')
	{
		return (&print_s);
	}
	else if (str == 'd')
	{
		return (&print_d);
	}

	return (0);
}
