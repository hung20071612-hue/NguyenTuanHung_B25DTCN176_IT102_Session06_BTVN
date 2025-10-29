#include<stdio.h>

int main(){
	int N, multi, i;
	printf("so nguyen duong: ");
	scanf("%d",&N);
	if(N > 10){
		printf("loi yeu cau nhap lai");
		return 0;
	}else{
		printf("bang cuu chuong: \n");
		for(i = 0; i <= 10; i++){
		multi = N * i;
		printf("%d * %d = %d \n",N,i,multi);
	}
	}
	return 0;
}
