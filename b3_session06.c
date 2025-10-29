#include <stdio.h>

int main(){
	int N, sum, i;
	printf("so nguyen duong: ");
	scanf("%d",&N);
	for(i = 0;i <= N ; i++){
		sum = sum + i;
	}
	printf("tong = %d",sum);
	return 0;
}
