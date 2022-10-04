#include "main.h"

/**
 *print_rev - the function that prints string in the reverse
 *@s: the parameter to be printed
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
