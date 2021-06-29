#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/
void rev_string(char *s)
{
        int i = 0, j = 0, k;
	char p[34];

        while (s[i] != '\0')
                i++;

        for (i = i - 1; i >= 0; i--)
	{
                p[j] = s[i];
		
		j++;	
	
		
	}

	for (k =0; k <= j-1; k++)
	{

		s[k] = p[k];
	}
	
}

