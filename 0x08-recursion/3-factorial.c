#include "main.h"
/**
 * factorial - return the factorial number
 * @n: number to be evaluated
 * Return: factorial of n, if n < 0 return -1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
