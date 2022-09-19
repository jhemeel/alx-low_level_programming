#include "main.h"
/**
 *print_last_digit -function that prints the last digit of a number.
 *@n: number whose last digit is being checked
 *
 *Return: l
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l *= -1;
	_printchar(l + '0');
	return (l);
}