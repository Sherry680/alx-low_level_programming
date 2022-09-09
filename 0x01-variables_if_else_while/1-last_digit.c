#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the last digit of random number
 *
 * Return: return 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n= rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	{
		else if (last > 5)
	}
	{
		else (last < 6)
	}
	return (0);
}
