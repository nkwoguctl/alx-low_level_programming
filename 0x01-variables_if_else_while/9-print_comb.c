#include<stdlib.h>
#include<stdio.h>
/* Prints out numbers starting from 0 and
 * ending at 9 with spaces and commas.
 */
int main(void)
{
	
	int i;
	
	int num;

	for (i = 0; i < 10; i++)
       {
     		num = i + '0';
		putchar(num);
		putchar(',');
		putchar(' ');
       }
       printf("\n");	
       return(0);
}
