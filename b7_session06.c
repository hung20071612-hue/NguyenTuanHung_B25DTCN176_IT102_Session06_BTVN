#include<stdio.h>

int main(){
	int a, b;
	printf("moi ban nhap 2 so nguyen duong: ");
	scanf("%d, %d",&a,&b);
		if(a <= 0 || b <= 0){
			printf("vui long nhap lai 2 so nguyen ");
			return 0;
	}
	int x = a, y = b;
	while(x != y){
		if (x > y){
        	x = x - y;
		}else{
			y = y - x;
	    }
	}
	printf("uoc chung lon nhat cua %d va %d la: %d\n",a,b,x);
	return 0;
}
