# include "main.h"
/**
 * swap_int - swap integers
 * @a: first parameter
 * @b: second parameter
 * Description: swap the value of two integers
 * Return :always (0);
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
