#include<stdlib.h>
#include<stdio.h>
/*
 *  Prints out alphabet both in upper and lower case
 *  Return(0) for success
   */
int main(void)
{
	
	int i;

	for (i = 97; i < 123; i++)
       {
                char charValue = i;
		putchar(charValue);
		if (charValue == 'z')
		{
			for (i = 65; i <= 90; i++)
			{
				char char_letter = i;
				putchar(char_letter);
			}
			break;
		}
       }
       putchar('\n');	
       return(0);
}
