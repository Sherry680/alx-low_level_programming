#include "main.h"
#include <stdio.h>

/**
 * Print_to_98 - prints natural
 * numbers from n to 98
 * @n:number to begin counting at
 * Return: returns nothing
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)

			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
