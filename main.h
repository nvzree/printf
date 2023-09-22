#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>


/* helper function */
int _putchar(char c);
int _putnum(long num, int count);
int (*get_func(char str))(va_list arg);


/* printf functions */
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_b(va_list args);

#endif
