#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sobuoidihoc;
	int tongsobuoihoc;
	int lythuyet;
	int thuchanh;
	int baitap;
	
	printf("chuyen can:\n");
	scanf("%d",&sobuoidihoc);
	
	printf("chuyen can quy dinh:\n");
	scanf("%d",&tongsobuoihoc);


    if (sobuoidihoc>tongsobuoihoc*0.75) {
    	printf(" duoc thi\n");
		
    	
    	printf(" Nhap diem ly thuyet\n");
    	scanf("%d",&lythuyet);
    	if(lythuyet>8){
    		printf("qua mon ly thuyet");
    		
		}else{
			printf("thi lai ly thuyet\n");
		}
    	
    	printf(" Nhap diem thuc hanh\n");
    	scanf("%d",&thuchanh);
    	
    	if(thuchanh>6){
    		printf(" qua mon thuc hanh\n");
		}
		else{
		printf("thi lai thuc hanh\n");
				}
				
    	printf(" Nhap diem bai tap\n");
    	scanf("%d",&baitap);
    	
    	if(baitap>4){
    	printf("qua mon bai tap lon\n");
		}
		else{
		printf("thi lai bai tap lon\n");
		}
	}
		else{
			printf("thi lai");
		}
			
	
	
	
	
	return 0;
}
