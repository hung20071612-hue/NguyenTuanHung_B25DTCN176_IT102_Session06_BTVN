#include<stdio.h>
int main(){
int a, b;
printf("nhap 2 so nguyen: ");
scanf("%d, %d", &a, &b);
if(a > b){
	printf("so lon hon la: %d",a);
}else if(b > a){
	printf("so lon hon la: %d",b);
}else{
	printf("hai so bang nhau");
}
return 0;
}
