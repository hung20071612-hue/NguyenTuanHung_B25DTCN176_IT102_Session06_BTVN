#include<stdio.h>

int main(){
	int i;
	int n;
	printf("bang cuu chuong: \n");
	for(i = 0; i <= 9 ; i++){
		for(n = 1; n <= 10; n++){
			int multi = i * n ;
			printf("%d x %d = %d \n",i,n,multi);
		}
	}
	return 0;
}
