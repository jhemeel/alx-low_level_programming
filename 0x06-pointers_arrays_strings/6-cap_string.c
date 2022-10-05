#include "main.h"

/**
* cap_string - This function capitalizes all words of a string.
* @s: sring to be processed.
*
* Return: pointer to the modified string.
*/
char *cap_string(char *s)
{
	int sep, i;

	sep = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (sep == 1 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
			sep = 0;
		}
		sep = is_sep(s[i]);
		i++;
}
	return (s);
}


