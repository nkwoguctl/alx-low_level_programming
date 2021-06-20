#include<stdlib.h>
#include<stdio.h>
/* Prints out numbers starting from 0 and
 * ending at 9
 */
int main(void)
{
	
	int i;

	for (i = 0; i < 10; i++)
       {
                int num;
		num = i + '0';
		putchar(num);
       }
       putchar('\n');	
       return(0);
}
