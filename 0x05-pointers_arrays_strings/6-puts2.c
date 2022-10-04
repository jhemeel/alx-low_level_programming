#include "main.h"

/**
 *puts2 - a function that prlints alternate characters of a string
 *@str: string to be printed
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
