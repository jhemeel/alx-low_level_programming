#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string whose lenght is being evaluated
 *
 * Return: returns the lenght og the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);

}
