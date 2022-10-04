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

	unsigned int i = 0;

	if (size == 0;
			return (NULL);

			p = (char *) malloc(size0f(char) * size);

			if (p == NULL)
			return (0);

			while (i < size)
			{
			*(p + i) = c;
			i++;
			}

			*(p + i) = '\0';

			return (p);
			}
