#include "main.h"

/**
 *_puts - function that prints string out to the stdout
 *@str: Parameter to be printed out
 *
 */

void _puts(char *str)
{
	while (*str > 0)
	{
		_putchar(str);
		str++;
	}
	_putchar('\n')

}
