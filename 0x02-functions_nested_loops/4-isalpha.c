#include "holberton.h"

/**
*_islower - function to check for lowercase character
*@c: print alphbet
*Return: 1 if c is lowercase, otherwise 0
*/

int _isalpha(int c)
{

	if (c >= 65 && c <= 122)

		return (1);

	else

		return (0);

}
