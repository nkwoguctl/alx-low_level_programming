#include<stdlib.h>
#include<stdio.h>
/* Prints out numbers starting from 0 and
 * ending at 9
 */
int main(void)
{
	
	int i;

	char char_num;

	for (i = 0; i < 10; i++)
       {
                char_num = i + '0';
		putchar(char_num);
       }
       putchar('\n');	
       return(0);
}
