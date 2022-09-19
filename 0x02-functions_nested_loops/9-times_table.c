#include "main.c"
/**
 * times_table -function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 0; j <= 9; j++)
			_putchar(',');
			_putchar(' ');

			product = i * j;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');

	}
	_putchar('\n');
}