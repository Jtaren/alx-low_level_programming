#include "main.h"
/**
 * _strchr - Empty point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
        int i;

        for (; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (&s[i]);
        }
        return (0);
}
