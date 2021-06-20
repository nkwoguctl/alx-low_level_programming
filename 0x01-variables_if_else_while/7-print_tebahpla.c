#include<stdlib.h>
#include<stdio.h>
/* Prints out numbers starting from 0 and
 * ending at 9
 */
int main(void)
{
	
	int i;
        char charValue;

	for (i = 122; i >= 97; i--)
       {
                charValue = i;
		putchar(charValue);
       }
       putchar('\n');	
       return(0);
}
