#include "main.c"
/**
 *_islower - a function that checks for lowercase character.
 *@c: character to be checked
 *
 * Return: return 1 if c is lowercase
 * otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
