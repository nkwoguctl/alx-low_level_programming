#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int r)
{
	if (r < 0)
		return (r*-1);
	else if (r == 0 || r > 0)
		return (r);
	else
		return (0);
	_putchar('\n');
}
