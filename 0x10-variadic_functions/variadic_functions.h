#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - define a printer
 * @p: data type
 * @prints: fucntion pointer to print the data type
 */

typedef struct print
{
char *p;
void (*prints)(va_list arg);
} print_t;

#endif
