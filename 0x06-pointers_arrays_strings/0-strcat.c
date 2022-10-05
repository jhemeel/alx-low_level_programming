#include "main.h"

/**
 *_strcat - the function that prints a concatenated stgring
 *@dest: the base string
 *@src: the string to concatenate
 *
 *Return: the new string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
