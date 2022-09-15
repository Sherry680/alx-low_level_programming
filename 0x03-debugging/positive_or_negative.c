#include <stdio.h>

/**
 * main - entry point
 * Description: print value of n status; zero, positive,negative
 * Return: always (0)
 */
void positive_or_negative(int i)
{
	int i;

	/* if statement */
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
