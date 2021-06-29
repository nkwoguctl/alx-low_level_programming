#include "holberton.h"
#include <stdio.h>


/**
 * puts2 - writes every other character
 * @str: input string to print
 * Description: prints every other character of string
 * Return: nothing
 **/
void puts2(char *str)
{
	int i = 0, j;
	while (str[i] != '\0')
		 i++;
	for (j = 0; j <= i-1; j++)
	{
		if ( j ==0 || j %2 == 0)
			_putchar(str[j]);
	}

}
