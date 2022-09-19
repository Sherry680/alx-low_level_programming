#include "main.h"
/**
 * reset_to_98 - reset to 98
 * @n: input value
 *
 * Description: takes a pointer to an int as parameter and update the value
 * Return: always (0)
 */
void reset_to_98(int *n)
{
	int *a;

	int x = 98;

	a = &x;
	*n = *a;
}
