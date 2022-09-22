#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: first input
 * @n: number of elements
 *
 * Description: reverse the content of an array of integers
 * Return: (0)
 */
void reverse_array(int *a, int n)
{
	int left, right, tmp;

	left = 0;
	right = n - 1;
	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
