#include<stdlib.h>
#include<stdio.h>
/* Prints out alphabets omitting 
 * letters q and e*
 * */
int main(void)
{
	
	int i;

	for (i = 97; i <= 122; i++)
       {
	        if (i == 101 || i == 113)
	  	{		
			continue;

                }
                char charValue = i;
		putchar(charValue);
       }
       putchar('\n');	
       return(0);
}
