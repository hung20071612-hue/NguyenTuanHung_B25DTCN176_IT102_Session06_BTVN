#include<stdio.h>
int main(){
	float salary, tax;
	printf("so tien: ");
	scanf("%f",&salary);
	if(salary <= 5){
		tax = salary * 5/100;
		printf("thue thu nhap phai dong: %.2f",tax);
	}else if(salary > 5 && salary <= 10){
		tax = salary * 10/100;
		printf("thue thu nhap phai dong: %.2f",tax);
	}else{
		tax = salary * 15/100;
		printf("thue thu nhap phai dong: %.2f",tax);
	}
	return 0;
}
