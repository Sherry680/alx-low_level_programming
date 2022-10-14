#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - addition
 * @x: input
 * @n: no. of parameters to be added together
 * @...: variable no. of parameters to calculate sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list a;
unsigned int x, sum = 0;
va_start(a, n);
for (x = 0; x < n; x++)
{
int n = va_arg(a, unsigned int);
sum += n;
}
va_end(a);
return (sum);
}
