#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	printf("The number 555 in various froms:\n");
	printf("Without any modifier:\n");
	printf("%d\n", 555);
	
	printf("With - modifier:\n");
	printf("%-d\n", 		555);
	
	printf("With digit string 10 as modifier:\n");
	printf("[%10d]\n", 555);
	
	printf("With 0 as modifier: \n");
	    printf("[%0d]\n", 555);
	    printf("With 0 anh digit string 10 as modifier:\n");
	printf("[%010d]\n", 555);
	    printf("With -,0 and digit string 10 as modifier:\n");
	    printf("[%-010d]\n", 555);
	
}
