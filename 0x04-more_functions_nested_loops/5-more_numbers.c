#include "main.h"

/**
 *more_numbers -function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int count;

	for (count = 1; count <= 10; count++)
	{
		int num;

		for (num = 0; num <= 14; num++)
			_putchar(num);
	}
	_putchar('\n');
}
