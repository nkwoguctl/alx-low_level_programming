#include<stdlib.h>
#include<stdio.h>
/* Prints out alphabet*/
int main(void)
{
	int i;
	for(i = 97; i <=122; i++)
       {
                char charValue = i;
		putchar(charValue);
       }			
       return(0);
}
