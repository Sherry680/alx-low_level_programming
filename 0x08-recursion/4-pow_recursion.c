#include "main.h"
/**
 * _pow_recursion - print power of a number
 * @x: input value x
 * @y: input value y
 * Description: return value of x raised to powr y
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
