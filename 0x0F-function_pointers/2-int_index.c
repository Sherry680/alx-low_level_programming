#include "function_pointers.h"
/**
 * int_index - search for an interger
 * @array: integer array input
 * @size: array size
 * @cmp: pointer to function which compares values
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array && cmp)
{
if (size <= 0)
{
return (-1);
}
for (x = 0; x < size; x++)
if (cmp(array[x]))
{
return (x);
}
}
return (-1);
}
