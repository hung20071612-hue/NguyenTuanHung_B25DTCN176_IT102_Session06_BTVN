#include<stdio.h>
int main(){
	float a, b, x;
	printf("nhap 2 so:");
	scanf("%f, %f", &a, &b);
	x = -b/a ;
	if(a = 0 && b == 0){
		printf("Phuong trinh co vo so nghiem");
	}else if(a = 0 && b != 0){
		printf("Phuong trinh vo nghiem");
	}else{
		printf("Phuong trinh co nghiem x = %.2f",x);
	}
	return 0;
}
