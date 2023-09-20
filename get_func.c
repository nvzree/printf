#include "main.h"

/**
 * get_func - returns pointer to function based on value of str
 * @str: parameter to function
 * Return: return integer
 */

int (*get_func(char str)) (va_list arg)
{
	/*Check if the format specifier is 'c'*/
	if (str == 'c')
	{
		/*Return a pointer to the print_c function*/
		return (&print_c);
	}
	/*Check if the format specifier is 's'*/
	else if (str == 's')
	{
		/*Return a pointer to the print_s function*/
		return (&print_s);
	}
	/*Check if the format specifier is 'd' or 'i'*/
	else if (str == 'd')
	{
		/*Return a pointer to the print_d function*/
		return (&print_d);
	}
	else if (str == 'i')
	{
		return (&print_d);
	}
	/*If no valid format specifier is found, return NULL*/

	return (0);
}
