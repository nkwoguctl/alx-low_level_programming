#include "holberton.h"



/**
 * puts_half - prints half of the string
 * @str: input string to print
 * Description: prints second half of string
 * Return: nothing
 **/
void puts_half(char *str)
{
	
	int i = 0;
        int len = 0;
	
	while (str[i] != '\0')
		i++;
	
	len = (i-1)/2;

	while (len < i)
	{
		_putchar(str[len]);
	
		len++;		

	}

}

