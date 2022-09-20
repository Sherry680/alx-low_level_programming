#include "main.h"
#include <stdio.h>
/**
 * Print_array - print array upto n elements
 * @a: array to be read from
 * @n: number of elements to be read
 *
 * Description: prints arrays upto n elements
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
