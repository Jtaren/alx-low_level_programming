#include "main.h"
/**
 * _putsrecursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		Puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
