#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <ctype.h>

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* helper function */
int _putchar(char c);
int _putnum(long num, int count);
int (*get_func(char str))(va_list arg);


/* printf functions */
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_flags(const char *format, int *i);
#endif
