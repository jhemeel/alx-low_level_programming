#include "main.h"

/**
 *puts2 - a function that prlints alternate characters of a string
 *@str: string to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if ((i % 2) == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');

}
