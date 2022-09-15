#include "main.h"

/**
 * largest_number - return the largest umber of 3 numbers
 * @x: first integer
 * @y: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int x, int y,int z)
{
	int largest;
	if (a >= y && x >= z)
	{
		largest = x;
	}
	else if (y >= x && y >= z)
	{
		largest = y;
	}
	else
	{
		largest = z;
	}
	return (largest);
}
