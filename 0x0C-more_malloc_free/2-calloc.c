#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to  concatenate from
 * @b: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int b)
{
	char *s;
	unsigned int i = 0,
		     j = 0,
		     len1 = 0,
		     len2 = 0;

	while (s1 && s1(len1))
		len++;
	if (b < len2)
		s = malloc(sizeof(char) * (len1 + b + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (b < len2 && i < (len1 + b))
		s[i++] = s2[j++];
	while (b >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
} 
