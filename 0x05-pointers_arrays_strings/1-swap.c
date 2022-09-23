#include "main.h"

/**
 * swap_int - function that swaps two integers
 * @a: first integer to swap
 * @b: second integer to swap
 *
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
