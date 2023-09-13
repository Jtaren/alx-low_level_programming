#include "main.h"

/**
 * _abs - Computes the absolute value
 * of the integer.
 *
 * @i: input number as an integer.
 *
 * Return: asolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
