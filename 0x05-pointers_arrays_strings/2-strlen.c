#include "holberton.h"

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
