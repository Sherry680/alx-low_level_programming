#include "search_algos.h"

/*
 * *int linear_search - search for value in an array of integers
 * *@array: pointer to first array
 * *@size: number of elements in array
 * *@value: search value
 * *return: -1 if value not present in array
 * */

int linear_search(int *array, size_t size, int value)
{
	    int a;
	        if (!array)
			        return (-1);

		    for (a = 0; a < (int) size; a++)
			        {
					        if (array[a] != value)
							            printf("Value checked array[%d] = [%d]\n", a, array[a]);
						        else
								            printf("Value checked array[%d] = [%d]\n", a, array[a]);
							    }
		        return (-1);
}
