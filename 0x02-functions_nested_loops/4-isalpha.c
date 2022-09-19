#include "main.h"

/**
 *_isalpha -unction that checks for alphabetic character.
 *@c: character that is cjecked
 *
 *Return: 1 if its an alphabet
 *othenrwise, 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= Z'))
		return (1);
	else
		return (0);
}
