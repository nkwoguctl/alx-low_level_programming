#include "holberton.h"


/**
 * _strlen - Returns the length of a string.
 * @str: string.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	char *t;
	int count = 0;
	for (t = s; *t != '\0';t++)
	{
		count++;
	
	}
	return count;
}
