#include "main.h"

/**
 *_strncat - function that concats two string with maximun of n element in src
 *@dest: the base string
 *@src: the string to concatenate
 *@n: largest number of bytes to append
 *
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
