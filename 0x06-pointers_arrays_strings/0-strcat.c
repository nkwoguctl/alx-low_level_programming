#include "holberton.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;
	
	char str[1000];
	
	char *p = str;
	

	while(dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	for (k = 0; k <= i-1; k++)
		str[k] = dest[k];
	for (k = 0; k <= j; k++)
		str[i + k] = src[k];
        
	return p;
}



