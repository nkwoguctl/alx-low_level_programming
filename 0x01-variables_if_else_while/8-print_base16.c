#include<stdlib.h>
#include<stdio.h>
/* Prints out numbers starting from 0 and
 * ending at 9 with the alphabets a-f
 *
 */
int main(void)
{
	
	int i;
	
	char charValue;

	for (i = 0; i < 11; i++)
       {
                if(i == 10)
		{
			for( i = 97; i <  103; i++)
			{
			        
				charValue = i;
		   		putchar(charValue);
			}
			break;
		}
		charValue = i +'0';
		putchar(charValue);
       }
       putchar('\n');	
       return(0);
}
