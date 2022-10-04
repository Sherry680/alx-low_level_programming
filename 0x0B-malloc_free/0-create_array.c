#include <stdlib.h>
#include "main.h"
/**
 * *create_array - create an array of chars
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success) Null (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
