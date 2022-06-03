#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int a1;
	
	printf("nhap so can so sanh\n");
	scanf("%d",&num1);
	
	a1=num1%2;
	if(a1==0){
		printf("%d la so chan",num1);
	}
	else
	{ printf("%d la so le",num1);
	}
		

	return 0;
}
