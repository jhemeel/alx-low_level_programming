#include "main.h"

/**
 *print_array -the function that prints an array to the stdout
 *@a: array to be printed
 *@n: number of arrays to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

}
