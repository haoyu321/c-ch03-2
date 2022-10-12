#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;
	int j;
	
	while(num < 5){
		int j=0;
		while(j <= num){
			printf("*");
			j= j + 1;
		}
		printf("\n");
		num = num + 1;
	}
		while(num > 0){
			int j=0;
			while(j < num){	
			printf("*");
			j = j + 1;
		}
			printf("\n");
			num = num - 1;
			}
	return 0;
}
